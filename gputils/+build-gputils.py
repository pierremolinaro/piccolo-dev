#!/usr/bin/python3
# -*- coding: UTF-8 -*-

#-----------------------------------------------------------------------------*

import subprocess
import sys
import os
import urllib
import platform, subprocess, time

if sys.version_info >= (2, 6) :
  import multiprocessing

#-----------------------------------------------------------------------------*
#   processorCount                                                            *
#-----------------------------------------------------------------------------*

def processorCount () :
  if sys.version_info >= (2, 6) :
    coreCount = multiprocessing.cpu_count ()
  else:
    coreCount = 1
  return coreCount

#-----------------------------------------------------------------------------*
#   FOR PRINTING IN COLOR                                                     *
#-----------------------------------------------------------------------------*

BLUE = '\033[94m'
GREEN = '\033[92m'
RED = '\033[91m'
ENDC = '\033[0m'
BOLD = '\033[1m'
UNDERLINE = '\033[4m'
BOLD_BLUE = BOLD + BLUE
BOLD_GREEN = BOLD + GREEN
BOLD_RED = BOLD + RED

#-----------------------------------------------------------------------------*
#   TESTING PLATFORM                                                          *
#-----------------------------------------------------------------------------*

def testPlatform () :
  #print "'" + platform.system () + "' '" + platform.release () + "' '" + platform.version () + "'"
  if  platform.system () == "Linux": # Ok
    pass
  elif  platform.system () != "Darwin":
    print BOLD_RED + "This script should run on Linux or Mac 10.6" + ENDC
    sys.exit (1)
  else:
    mac_system = os.path.splitext (platform.mac_ver() [0]) [0] # 10.6
    #print "'" + mac_system + "'"
    if (mac_system != "10.6") and (mac_system != "10.10") :
      print BOLD_RED + "This script should run on SnowLeopard or Yosemite" + ENDC
      sys.exit (1)

#-----------------------------------------------------------------------------*

def onYosemite () :
  #print "'" + platform.system () + "' '" + platform.release () + "' '" + platform.version () + "'"
  result = False
  if  platform.system () == "Darwin":
    mac_system = os.path.splitext (platform.mac_ver() [0]) [0]
    result = mac_system == "10.10"
  return result

#-----------------------------------------------------------------------------*

def onElCapitan () :
  #print "'" + platform.system () + "' '" + platform.release () + "' '" + platform.version () + "'"
  result = False
  if  platform.system () == "Darwin":
    mac_system = os.path.splitext (platform.mac_ver() [0]) [0]
    result = mac_system == "10.11"
  return result

#-----------------------------------------------------------------------------*
#   myChDir                                                                   *
#-----------------------------------------------------------------------------*

def myChDir (dir):
  print BOLD_BLUE + "+ chdir " + dir + ENDC
  os.chdir (dir)

#-----------------------------------------------------------------------------*
#   COPY TREE                                                                 *
#-----------------------------------------------------------------------------*
# http://stackoverflow.com/questions/1868714/how-do-i-copy-an-entire-directory-of-files-into-an-existing-directory-using-pyth

def myCopyTree (src, dst):
  print BOLD_BLUE + "+ copytree " + src + " " + dst + ENDC
  for item in os.listdir (src):
    s = os.path.join (src, item)
    d = os.path.join (dst, item)
    if os.path.isdir (s):
      if not os.path.exists (d):
        os.mkdir (d)
      myCopyTree (s, d)
    else:
      shutil.copy2 (s, d)

#-----------------------------------------------------------------------------*
#   ARCHIVE DOWNLOAD                                                          *
#-----------------------------------------------------------------------------*

def downloadReportHook (a,b,fileSize):
  # "," at the end of the line is important!
  if fileSize < (1 << 10):
    sizeString = str (fileSize)
  else:
    if fileSize < (1 << 20):
      sizeString = str (fileSize >> 10) + "Ki"
    else:
      sizeString = str (fileSize >> 20) + "Mi"
  print "% 3.1f%% of %sB\r" % (min(100.0, float(a * b) / fileSize * 100.0), sizeString),
  sys.stdout.flush()

#-----------------------------------------------------------------------------*

def downloadArchive (archiveURL, archivePath, startTime):
  if not os.path.exists (archivePath):
    if not os.path.exists (os.path.dirname (archivePath)):
      os.mkdir (os.path.dirname (archivePath))
    print BOLD_BLUE + "+Download " + os.path.basename (archivePath) + ENDC
    print "URL '" + archiveURL + "'"
    print "Path '" + archivePath + "'"
    urllib.urlretrieve (archiveURL,  archivePath + ".download", downloadReportHook)
    print ""
    os.rename (archivePath + ".download", archivePath)
    print "Done at %3.1f s" % (time.time () - startTime)

#-----------------------------------------------------------------------------*
#   runCommand                                                                *
#-----------------------------------------------------------------------------*

def runCommand (cmd) :
  str = "+"
  for s in cmd:
    str += " " + s
  print BOLD_BLUE + str + ENDC
  childProcess = subprocess.Popen (cmd)
  childProcess.wait ()
  if childProcess.returncode != 0 :
    sys.exit (childProcess.returncode)

#-----------------------------------------------------------------------------*
#   displayDurationFromStartTime                                              *
#-----------------------------------------------------------------------------*

def displayDurationFromStartTime (startTime) :
  totalDurationInSeconds = int (time.time () - startTime)
  durationInSecondes = totalDurationInSeconds % 60
  durationInMinutes = (totalDurationInSeconds / 60) % 60
  durationInHours = totalDurationInSeconds / 3600
  s = ""
  if durationInHours > 0:
    s += str (durationInHours) + "h"
  if durationInMinutes > 0:
    s += str (durationInMinutes) + "min"
  s += str (durationInSecondes) + "s"
  print "Done at +" + s

#-----------------------------------------------------------------------------*
#  ENTRY POINT                                                                *
#-----------------------------------------------------------------------------*

#-------------------------------------- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)
#-------------------------------------- Archive versions
GPUTILS_VERSION  = "1.2.0" # "1.5.0"
MINOR_VERSION = "" # "-1"
BZ2_ARCHIVE = False # True # If true, archive is bz2, otherwise archive is .gz

#-------------------------------------- Testing platform
#testPlatform ()
#--------------------------------------
startTime = time.time ()
#-------------------------------------- Product
(SYSTEM_NAME, MODE_NAME, RELEASE, VERSION, MACHINE) = os.uname ()
#print "SYSTEM_NAME '" + SYSTEM_NAME + "'"
#print "MACHINE '" + MACHINE + "'"
if (MACHINE == "i386") & (SYSTEM_NAME == "Darwin") :
  MACHINE = "Intel"
PRODUCT_NAME = "gputils-" + GPUTILS_VERSION + MINOR_VERSION + "-for-" + MACHINE + "-" + SYSTEM_NAME
print "Product Name: '" + PRODUCT_NAME + "'"
INSTALL_DIR = scriptDir + "/" + PRODUCT_NAME
PRODUCT_DIR = scriptDir + "/PRODUCT"
#-------------------------------------- Product
PROCESSOR_COUNT = str (processorCount ())
#print "PROCESSOR_COUNT '" + PROCESSOR_COUNT + "'"
#-------------------------------------- Archive directory
ARCHIVE_RELATIVE_DIR = "archives-for-gputils"
ARCHIVE_DIR = os.path.abspath (scriptDir + "/" + ARCHIVE_RELATIVE_DIR) + "/"
runCommand (["mkdir", "-p", ARCHIVE_DIR])
#-------------------------------------- Archives
if BZ2_ARCHIVE:
  ARCHIVE_EXTENSION = ".tar.bz2"
  UNZIP_UTILITY = "bunzip2"
else:
  ARCHIVE_EXTENSION = ".tar.gz"
  UNZIP_UTILITY = "gunzip"
GPUTILS = "gputils-" + GPUTILS_VERSION
GPUTILS_ARCHIVE_PATH = ARCHIVE_DIR + GPUTILS + MINOR_VERSION + ARCHIVE_EXTENSION
#-------------------------------------- Download
#Par exemple : https://sourceforge.net/projects/gputils/files/gputils/1.5.0/gputils-1.5.0.tar.gz/download
print  BOLD_GREEN + "-------------- Download archives" + ENDC
archiveURL = "https://sourceforge.net/projects/gputils/files/gputils/" + GPUTILS_VERSION
archiveURL += "/" + GPUTILS + MINOR_VERSION + ARCHIVE_EXTENSION + "/download"
downloadArchive (archiveURL, GPUTILS_ARCHIVE_PATH, startTime)
#-------------------------------------- GPUTILS
print BOLD_GREEN + "-------------- gputils" + ENDC
if not os.path.exists (INSTALL_DIR + "/bin/gpasm"):
  runCommand (["cp", GPUTILS_ARCHIVE_PATH, GPUTILS + ARCHIVE_EXTENSION])
  runCommand (["rm", "-f", GPUTILS + ".tar"])
  runCommand ([UNZIP_UTILITY, GPUTILS + ARCHIVE_EXTENSION])
  runCommand (["tar", "xf", GPUTILS + ".tar"])
  runCommand (["rm", GPUTILS + ".tar"])
  os.chdir (scriptDir + "/" + GPUTILS)
  runCommand (["./configure", "--help"])
  GPUTILS_CONFIGURE_COMMAND = [
    "./configure",
    "--prefix=" + INSTALL_DIR,
    "CFLAGS=-O2 -fomit-frame-pointer",
    "CXXFLAGS=-O2 -fomit-frame-pointer"
  ]
  runCommand (GPUTILS_CONFIGURE_COMMAND)
  runCommand (["make", "all", "-j" + PROCESSOR_COUNT])
  runCommand (["make", "install"])
  os.chdir (scriptDir)
  runCommand (["rm", "-fr", GPUTILS])
  displayDurationFromStartTime (startTime)
#-------------------------------------- MANIFEST
print BOLD_GREEN + "-------------- MANIFEST" + ENDC
if not os.path.exists (PRODUCT_DIR):
  runCommand (["mkdir", PRODUCT_DIR])
if not os.path.exists (PRODUCT_DIR + "/" + PRODUCT_NAME + ".txt"):
  with open (INSTALL_DIR + "/contents.txt", "w") as file :
    s = "GPUTILS " + GPUTILS_VERSION + MINOR_VERSION
    file.write (s)
  runCommand (["cp", INSTALL_DIR + "/contents.txt", PRODUCT_DIR + "/" + PRODUCT_NAME + ".txt"])
  displayDurationFromStartTime (startTime)
#-------------------------------------- PRODUCT
print BOLD_GREEN + "-------------- PRODUCT" + ENDC
if not os.path.exists (PRODUCT_DIR + "/" + PRODUCT_NAME + ".tar.bz2"):
  runCommand (["tar", "cf", PRODUCT_NAME + ".tar", PRODUCT_NAME])
  runCommand (["bzip2", "-9", PRODUCT_NAME + ".tar"])
  runCommand (["mv", PRODUCT_NAME + ".tar.bz2", PRODUCT_DIR + "/" + PRODUCT_NAME + ".tar.bz2"])
  displayDurationFromStartTime (startTime)
#-------------------------------------- Done
print BOLD_GREEN + "-------------- Success!" + ENDC

#-----------------------------------------------------------------------------*
