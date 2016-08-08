#!/bin/sh
set -x
cd `dirname $0` &&
python ../makefile-macosx/build.py &&
../makefile-macosx/piccolo --no-color -q --version | awk -F"[, ]" '{ print $3; }' > files-from-piccolo/version-piccolo.txt &&
../makefile-macosx/piccolo --no-color --memory=18F448 > files-from-piccolo/memory-18F448.txt &&
../makefile-macosx/piccolo --no-color --memory=16F690 > files-from-piccolo/memory-16F690.txt &&
../makefile-macosx/piccolo --no-color --memory=16F57 > files-from-piccolo/memory-16F57.txt &&
../makefile-macosx/piccolo --no-color --registers=12F683 > files-from-piccolo/registers-12F683.txt &&
../makefile-macosx/piccolo --no-color --configuration=10F220 > files-from-piccolo/configuration-10F220.txt &&
../makefile-macosx/piccolo --no-color --baseline > files-from-piccolo/baseline.txt &&
../makefile-macosx/piccolo --no-color --midrange > files-from-piccolo/midrange.txt &&
../makefile-macosx/piccolo --no-color --pic18 > files-from-piccolo/pic18.txt &&
../makefile-macosx/piccolo --output-keyword-list-file=piccolo_lexique:controlKeyWordList:5:\\pic!:!:files-from-piccolo/mots-reserves-langage.tex &&
../makefile-macosx/piccolo --output-keyword-list-file=piccolo_lexique:instructionKeyWordList:6:\\pic!:!:files-from-piccolo/mots-reserves-instructions.tex &&
echo "---------------- SUCCESS"
