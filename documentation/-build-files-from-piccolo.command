#!/bin/sh
set -x
cd `dirname $0` &&
../makefile_macosx/build.command &&
../makefile_macosx/piccolo --no-color --version | awk '{ print $4; }' > files-from-piccolo/version-piccolo.txt &&
../makefile_macosx/piccolo --no-color --memory=18F448 > files-from-piccolo/memory-18F448.txt &&
../makefile_macosx/piccolo --no-color --memory=16F690 > files-from-piccolo/memory-16F690.txt &&
../makefile_macosx/piccolo --no-color --memory=16F57 > files-from-piccolo/memory-16F57.txt &&
../makefile_macosx/piccolo --no-color --registers=12F683 > files-from-piccolo/registers-12F683.txt &&
../makefile_macosx/piccolo --no-color --configuration=10F220 > files-from-piccolo/configuration-10F220.txt &&
../makefile_macosx/piccolo --no-color --baseline > files-from-piccolo/baseline.txt &&
../makefile_macosx/piccolo --no-color --midrange > files-from-piccolo/midrange.txt &&
../makefile_macosx/piccolo --no-color --pic18 > files-from-piccolo/pic18.txt &&
echo "---------------- SUCCESS"