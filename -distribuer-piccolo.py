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
#-------------------- Supprimer une distribution existante
TEMP_DIR= os.path.normpath (scriptDir + "/../DISTRIBUTION_PICCOLO")
runCommand (["rm", "-fr", TEMP_DIR])
#-------------------- Creer le repertoire contenant la distribution
runCommand (["mkdir", TEMP_DIR])
#-------------------- Importer piccolo
texteSurConsole = runHiddenCommand (["svn", "export", "https://piccolo.rts-software.org/svn/", TEMP_DIR + "/piccolo"])
components = texteSurConsole.split ("Exported revision")
#print "'" + components [1] + "'"
components = components [1].split (".")
numeroRevisionSVN = components [0].strip ()
print "Révision SVN : '" + numeroRevisionSVN + "'"
#-------------------- Obtenir l'année
ANNEE = str (datetime.datetime.now().year)
print "ANNÉE : '" + ANNEE + "'"
#-------------------- Obtenir le numéro de version Piccolo
f = open (TEMP_DIR + "/piccolo/build/output/project_header.h", "r")
text = f.read ()
f.close ()
components = text.split ('"')
versionPICCOLO = components [1]
print "Version PICCOLO : '" + versionPICCOLO + "'"
#--- Renommer le répertoire de construction
DIR= os.path.normpath (scriptDir + "/../DISTRIBUTION_PICCOLO_" + versionPICCOLO)
runCommand (["rm", "-fr", DIR])
runCommand (["mv", TEMP_DIR, DIR])
#-------------------- Mettre a jour les numéros de version
writeFile (versionPICCOLO, DIR + "/version-piccolo.txt")
writeFile (numeroRevisionSVN, DIR + "/info-piccolo.txt")
remplacerAnneeEtVersionGALGAS (ANNEE, versionPICCOLO, DIR + "/piccolo/xcode-project/Info.plist")
for root, dirs, files in os.walk (DIR + "/piccolo/piccolo-sources"):
  for filename in files:
    (base, extension) = os.path.splitext (filename)
    ok = extension == ".piccolo"
    if not ok:
      ok = extension == ".galgasProject"
    if not ok:
      ok = extension == ".h"
    if not ok:
      ok = extension == ".cpp"
    if not ok:
      ok = extension == ".m"
    remplacerAnneeEtVersionGALGAS (ANNEE, versionPICCOLO, root + "/" + filename)
#-------------------- Creer l'archive des sources de piccolo
os.chdir (DIR)
runCommand (["eolc", "-unix", "-D" + DIR + "/piccolo", "-Eh", "-Ec", "-Ecpp", "-Em", "-Emm", "-Epy", "-Epiccolo"])
runCommand (["tar", "-cf", "piccolo-sources-lf.tar", "piccolo"])
runCommand (["bzip2", "-9", "piccolo-sources-lf.tar"])
runCommand (["eolc", "-dos", "-D" + DIR + "/piccolo", "-Eh", "-Ec", "-Ecpp", "-Em", "-Emm", "-Epy", "-Epiccolo"])
#os.chdir (DIR)
runCommand (["tar", "-cf", "piccolo-sources-crlf.tar", "piccolo"])
runCommand (["bzip2", "-9", "piccolo-sources-crlf.tar"])
runCommand (["eolc", "-unix", "-D" + DIR + "/piccolo", "-Eh", "-Ec", "-Ecpp", "-Em", "-Emm", "-Epy", "-Epiccolo"])
#-------------------- Copier changeLog
runCommand (["mv", DIR + "/piccolo/changeLog.html", DIR + "/changeLog.html"])
#-------------------- Recompiler le projet Xcode (Lion)
runCommand (["galgas", "--macosx=7", DIR + "/piccolo/+piccolo.galgasProject"])
os.chdir (DIR + "/piccolo/xcode-project")
runCommand (["xcodebuild", "-project", "piccolo.xcodeproj", "-target", "Cocoa piccolo", "-configuration", "Default"])
runCommand (["mkdir", DIR + "/COCOA-PICCOLO-ARC"])
runCommand (["cp", DIR + "/piccolo/AUTHORS", DIR + "/COCOA-PICCOLO-ARC"])
runCommand (["cp", DIR + "/piccolo/COPYING", DIR + "/COCOA-PICCOLO-ARC"])
runCommand (["cp", "-r", DIR + "/piccolo/xcode-project/build/Default/CocoaPiccolo.app", DIR + "/COCOA-PICCOLO-ARC"])
runCommand (["hdiutil", "create", "-srcfolder", DIR + "/COCOA-PICCOLO-ARC", DIR + "/cocoa-piccolo-arc.dmg"])
runCommand (["rm", "-fr", DIR + "/COCOA-PICCOLO-ARC"])
#-------------------- Recompiler le projet Xcode (SnowLeopard)
runCommand (["galgas", "--macosx=6", DIR + "/piccolo/+piccolo.galgasProject"])
os.chdir (DIR + "/piccolo/xcode-project")
runCommand (["xcodebuild", "-project", "piccolo.xcodeproj", "-target", "Cocoa piccolo", "-configuration", "Default"])
runCommand (["mkdir", DIR + "/COCOA-PICCOLO-GC"])
runCommand (["cp", DIR + "/piccolo/AUTHORS", DIR + "/COCOA-PICCOLO-GC"])
runCommand (["cp", DIR + "/piccolo/COPYING", DIR + "/COCOA-PICCOLO-GC"])
runCommand (["cp", "-r", DIR + "/piccolo/xcode-project/build/Default/CocoaPiccolo.app", DIR + "/COCOA-PICCOLO-GC"])
runCommand (["hdiutil", "create", "-srcfolder", DIR + "/COCOA-PICCOLO-GC", DIR + "/cocoa-piccolo-gc.dmg"])
runCommand (["rm", "-fr", DIR + "/COCOA-PICCOLO-GC"])
runCommand (["mv", DIR + "/piccolo/xcode-project/build/Default/CocoaPiccolo.app", DIR + "/piccolo/xcode-project/build/Default/CocoaPiccolo-gc.app"])
#-------------------- Creer l'executable mac (release et debug)
os.chdir (DIR + "/piccolo/makefile-macosx")
runCommand (["python", "build.py"])
os.chdir (DIR)
runCommand ([DIR + "/piccolo/documentation/-build-files-from-piccolo.command"])
#-------------------- Copy samples
runCommand (["python", DIR + "/piccolo/tests/-compile-all.py"])
runCommand (["mkdir", DIR + "/samples" ])
runCommand (["cp", "-R", DIR + "/piccolo/tests/baseline-testfiles", DIR + "/samples/baseline_examples"])
runCommand (["cp", "-R", DIR + "/piccolo/tests/midrange-tests", DIR + "/samples/midrange_examples"])
runCommand (["cp", "-R", DIR + "/piccolo/tests/pic18-tests", DIR + "/samples/pic18_examples"])
#-------------------- Supported devices
texteSurConsole = runHiddenCommand ([DIR + "/piccolo/makefile-macosx/piccolo", "--baseline"])
with open (DIR + "/supported-baseline-devices.txt", "w") as f :
  f.write (texteSurConsole)
texteSurConsole = runHiddenCommand ([DIR + "/piccolo/makefile-macosx/piccolo", "--midrange"])
with open (DIR + "/supported-midrange-devices.txt", "w") as f :
  f.write (texteSurConsole)
texteSurConsole = runHiddenCommand ([DIR + "/piccolo/makefile-macosx/piccolo", "--pic18"])
with open (DIR + "/supported-pic18-devices.txt", "w") as f :
  f.write (texteSurConsole)
#-------------------- Construire la documentation Latex
remplacerAnneeEtVersionGALGAS (ANNEE, versionPICCOLO, DIR + "/piccolo/documentation/piccolo.tex")
runHiddenCommand ([DIR + "/piccolo/documentation/-build-couleur.command"])
runCommand (["cp", "piccolo/documentation/piccolo.pdf", "piccolo-" + versionPICCOLO + ".pdf"])
runCommand (["rm", "-fr", "piccolo/documentation"])
#-------------------- Creer l'archive de l'executable mac (release et debug)
os.chdir (DIR + "/piccolo/makefile-macosx")
runCommand (["python", "build.py"])
runCommand (["bzip2", "-9", "piccolo"])
#runCommand (["bzip2", "-9", "piccolo-debug.exe"])
os.chdir (DIR)
runCommand (["mv", DIR + "/piccolo/makefile-macosx/piccolo.bz2", "piccolo-macintel.bz2"])
#runCommand (["mv", DIR + "/piccolo/makefile-win32-on-macosx/piccolo-debug.exe.bz2", "piccolo-debug.exe.bz2"])
runCommand (["rm", "-fr", "piccolo/makefile-macosx"])
runCommand (["rm", "-fr", "piccolo/build/cli-objects"])
#-------------------- Creer l'archive de l'executable windows (release et debug)
os.chdir (DIR + "/piccolo/makefile-win32-on-macosx")
runCommand (["python", "build.py"])
runCommand (["bzip2", "-9", "piccolo.exe"])
#runCommand (["bzip2", "-9", "piccolo-debug.exe"])
os.chdir (DIR)
runCommand (["mv", DIR + "/piccolo/makefile-win32-on-macosx/piccolo.exe.bz2", "piccolo.exe.bz2"])
#runCommand (["mv", DIR + "/piccolo/makefile-win32-on-macosx/piccolo-debug.exe.bz2", "piccolo-debug.exe.bz2"])
runCommand (["rm", "-fr", "piccolo/makefile-win32-on-macosx"])
runCommand (["rm", "-fr", "piccolo/build/cli-objects"])
#-------------------- Creer l'archive de l'executable x86 linux 32 (release et debug)
os.chdir (DIR + "/piccolo/makefile-x86linux32-on-macosx")
runCommand (["python", "build.py"])
runCommand (["zip", "-9", "piccolo.zip", "piccolo"])
#runCommand (["zip", "-9", "piccolo-debug.zip", "piccolo-debug"])
os.chdir (DIR)
runCommand (["mv", DIR + "/piccolo/makefile-x86linux32-on-macosx/piccolo.zip", "piccolo-i386-linux.zip"])
#runCommand (["mv", DIR + "/piccolo/makefile-x86linux32-on-macosx/piccolo-debug.zip", "piccolo-debug-i386-linux.zip"])
runCommand (["rm", "-fr", "piccolo/makefile-x86linux32-on-macosx"])
runCommand (["rm", "-fr", "piccolo/build/cli-objects"])
#-------------------- Creer l'archive de l'executable x86 linux 64 (release et debug)
os.chdir (DIR + "/piccolo/makefile-x86linux64-on-macosx")
runCommand (["python", "build.py"])
runCommand (["zip", "-9", "piccolo.zip", "piccolo"])
#runCommand (["zip", "-9", "piccolo-debug.zip", "piccolo-debug"])
os.chdir (DIR)
runCommand (["mv", DIR + "/piccolo/makefile-x86linux64-on-macosx/piccolo.zip", "piccolo-x86_64-linux.zip"])
#runCommand (["mv", DIR + "/piccolo/makefile-x86linux64-on-macosx/piccolo-debug.zip", "piccolo-debug-x86_64-linux.zip"])
runCommand (["rm", "-fr", "piccolo/makefile-x86linux64-on-macosx"])
runCommand (["rm", "-fr", "piccolo/build/cli-objects"])
#-------------------- Creer l'archive de l'outil ligne de commande pour mac
runCommand (["mkdir", DIR + "/COCOA-TOOL"])
runCommand (["cp", DIR + "/piccolo/AUTHORS", DIR + "/COCOA-TOOL"])
runCommand (["cp", DIR + "/piccolo/COPYING", DIR + "/COCOA-TOOL"])
runCommand (["cp", "-r", DIR + "/piccolo/xcode-project/build/Default/CocoaPiccolo-gc.app/Contents/Resources/piccolo", DIR + "/COCOA-TOOL/piccolo"])
runCommand (["cp", "-r", DIR + "/piccolo/xcode-project/build/Default/CocoaPiccolo-gc.app/Contents/Resources/piccolo-debug", DIR + "/COCOA-TOOL/piccolo-debug"])
runCommand (["hdiutil", "create", "-srcfolder", DIR + "/COCOA-TOOL", DIR + "/piccolo-tool.dmg"])
runCommand (["rm", "-fr", DIR + "/COCOA-TOOL"])
#-------------------- Supprimer les repertoires sources
runCommand (["rm", "-fr", DIR + "/piccolo"])
print BOLD_GREEN + "-------------- SUCCES ---------------" + ENDC

#------------------------------------------------------------------------------*
