#!/usr/bin/python3
# -*- coding: UTF-8 -*-

#------------------------------------------------------------------------------*

import sys, os, subprocess, atexit, datetime

#------------------------------------------------------------------------------*
#   FOR PRINTING IN COLOR                                                      *
#------------------------------------------------------------------------------*

MAGENTA = '\033[35m'
BLUE = '\033[34m'
GREEN = '\033[32m'
RED = '\033[31m'
ENDC = '\033[0m'
BOLD = '\033[1m'
UNDERLINE = '\033[4m'
BOLD_MAGENTA = BOLD + MAGENTA
BOLD_BLUE = BOLD + BLUE
BOLD_GREEN = BOLD + GREEN
BOLD_RED = BOLD + RED

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
#  ENTRY POINT                                                                 *
#------------------------------------------------------------------------------*

#-------------------------------------- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)
#-------------------- Lister les répertoires
for dirname, dirnames, filenames in os.walk (scriptDir) :
  for filename in filenames:
    fullPath = os.path.join (dirname, filename)
    f, extension = os.path.splitext (filename)
    if (extension == ".hex") or (extension == ".lst")  or (extension == ".dot")  or (extension == ".asm") or (extension == ".list") or (extension == ".cod") :
      os.remove (fullPath)

#------------------------------------------------------------------------------*
