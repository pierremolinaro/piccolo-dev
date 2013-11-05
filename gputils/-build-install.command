#!/bin/sh
VERSION=1.2.0 &&
cd `dirname $0` &&
rm -fr gputils-$VERSION &&
rm -f gputils-$VERSION.tar &&
gunzip -c gputils-$VERSION.tar.gz > gputils-$VERSION.tar &&
tar xf gputils-$VERSION.tar &&
rm -f gputils-$VERSION.tar &&
cd gputils-$VERSION &&
./configure --help &&
./configure --prefix=/usr/local/gputils-$VERSION &&
make &&
sudo make install &&
cd .. &&
rm -r gputils-$VERSION &&
echo "Success"
