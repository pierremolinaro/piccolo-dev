#!/bin/sh
cd `dirname $0` &&
../../makefile_macosx/build.command &&
export GPUTILS_PATH=/usr/local/gputils-1.1.0/bin &&
echo "-------------- if_semi_colon" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror instructions.piccolo &&
$GPUTILS_PATH/gpasm instructions.asm -o instructions-2.hex &&
hexcmp instructions.hex instructions-2.hex &&
#----
echo "-------------- SUCCES ---------------" ||
echo "-------------- ECHEC ----------------"
