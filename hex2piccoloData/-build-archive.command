#!/bin/sh

VERSION=1.0.0 &&
DIR=`dirname $0` &&
cd ${DIR} &&
/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild -alltargets -configuration Default &&
cd ${DIR}/build/Debug &&
mv hex2piccoloData hex2piccoloData-${VERSION} &&
tar cf hex2piccoloData-${VERSION}.tar hex2piccoloData-${VERSION} &&
bzip2 -9 hex2piccoloData-${VERSION}.tar &&
cd ${DIR} &&
mv ${DIR}/build/Debug/hex2piccoloData-${VERSION}.tar.bz2 ${DIR}/hex2piccoloData-${VERSION}.tar.bz2 &&
rm -fr build
echo "---------------- SUCCES --------------------------"
