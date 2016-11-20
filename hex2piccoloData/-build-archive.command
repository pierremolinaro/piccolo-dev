#!/bin/sh

VERSION=1.0.0 &&
DIR=`dirname $0` &&
cd ${DIR} &&
xcodebuild -configuration Release &&
cd ${DIR}/build/Release &&
mv hex2piccoloData hex2piccoloData-${VERSION} &&
tar cf hex2piccoloData-${VERSION}.tar hex2piccoloData-${VERSION} &&
bzip2 -9 hex2piccoloData-${VERSION}.tar &&
cd ${DIR} &&
mv ${DIR}/build/Release/hex2piccoloData-${VERSION}.tar.bz2 ${DIR}/hex2piccoloData-${VERSION}.tar.bz2 &&
rm -fr build
echo "---------------- SUCCES --------------------------"
