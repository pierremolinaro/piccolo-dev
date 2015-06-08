#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#------------------------------------------------------------------------------*

import sys, os, subprocess, atexit, datetime

#------------------------------------------------------------------------------*
#   FOR PRINTING IN COLOR                                                      *
#------------------------------------------------------------------------------*

MAGENTA = '\033[95m'
BLUE = '\033[94m'
GREEN = '\033[92m'
RED = '\033[91m'
ENDC = '\033[0m'
BOLD = '\033[1m'
UNDERLINE = '\033[4m'
BOLD_MAGENTA = BOLD + MAGENTA
BOLD_BLUE = BOLD + BLUE
BOLD_GREEN = BOLD + GREEN
BOLD_RED = BOLD + RED

#------------------------------------------------------------------------------*
#   writeFile                                                                  *
#------------------------------------------------------------------------------*

def writeFile (contents, filename) :
  f = open (filename, "w")
  f.write (contents)
  f.close ()

#------------------------------------------------------------------------------*
#   remplacerAnneeEtVersionGALGAS                                              *
#------------------------------------------------------------------------------*

def remplacerAnneeEtVersionGALGAS (annee, versionPICCOLO, filename) :
  f = open (filename, "r")
  contents = f.read ()
  f.close ()
  contents = contents.replace ("!AN!", annee)
  contents = contents.replace ("GALGASBETAVERSION", versionPICCOLO)
  writeFile (contents, filename)

#------------------------------------------------------------------------------*
#   runCommand                                                                 *
#------------------------------------------------------------------------------*

def runCommand (cmd) :
  str = "+"
  for s in cmd:
    str += " " + s
  print BOLD_MAGENTA + str + ENDC
  childProcess = subprocess.Popen (cmd)
  childProcess.wait ()
  if childProcess.returncode != 0 :
    sys.exit (childProcess.returncode)

#------------------------------------------------------------------------------*
#   runHiddenCommand                                                           *
#------------------------------------------------------------------------------*

def runHiddenCommand (cmd) :
  str = "+"
  for s in cmd:
    str += " " + s
  print BOLD_MAGENTA + str + ENDC
  result = ""
  compteur = 0
  childProcess = subprocess.Popen (cmd, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
  while True:
    line = childProcess.stdout.readline ()
    if line != "":
      compteur = compteur + 1
      result += line
      if compteur == 10:
        compteur = 0
        sys.stdout.write (".") # Print without newline
    else:
      print ""
      childProcess.wait ()
      if childProcess.returncode != 0 :
        sys.exit (childProcess.returncode)
      return result

#------------------------------------------------------------------------------*
#  ENTRY POINT                                                                 *
#------------------------------------------------------------------------------*

#-------------------------------------- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)
runCommand (["python", scriptDir + "/../makefile-macosx/build.py"])
GPUTILS_PATH= "/usr/local/gputils-1.2.0/bin/gpasm"
#-------------------- Lister les répertoires
for dirname, dirnames, filenames in os.walk (scriptDir) :
  for filename in filenames:
    fullPath = os.path.join (dirname, filename)
    basename, extension = os.path.splitext (fullPath)
    if extension == ".piccolo" :
      runCommand ([scriptDir + "/../makefile-macosx/piccolo", "-v", "-S", "-O", "-L", "--Werror", fullPath])
      if os.path.exists (basename + ".asm") :
        runCommand ([GPUTILS_PATH, basename + ".asm", "-o", basename + "-2.hex"])
        runCommand (["hexcmp", basename + ".hex", basename + "-2.hex"])

#------------------------------------------------------------------------------*
