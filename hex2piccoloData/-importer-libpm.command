#!/bin/sh
cd `dirname $0` &&
galgas -v --extract-libpm=sources/libpm &&
echo "---------------- SUCCES --------------------------" ||
echo "---------------- ÉCHEC --------------------------"