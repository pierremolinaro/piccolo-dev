#!/bin/sh
export GPUTILS_PATH=/usr/local/gputils/0.13.6/bin
cd `dirname $0` &&
echo "-------------- if_semi_colon" &&
piccolo -v -S -O -L if_semi_colon.piccolo &&
$GPUTILS_PATH/gpasm if_semi_colon.asm -o if_semi_colon-2.hex &&
hexcmp if_semi_colon.hex if_semi_colon-2.hex &&
echo "-------------- structured_if (without optimization)" &&
piccolo -v -S -L structured_if.piccolo &&
$GPUTILS_PATH/gpasm structured_if.asm -o structured_if-2.hex &&
hexcmp structured_if.hex structured_if-2.hex &&
echo "-------------- structured_if (with optimization)" &&
piccolo -v -S -O -L structured_if.piccolo &&
$GPUTILS_PATH/gpasm structured_if.asm -o structured_if-2.hex &&
hexcmp structured_if.hex structured_if-2.hex &&
#----
echo "-------------- SUCCES ---------------" ||
echo "-------------- ECHEC ----------------"
