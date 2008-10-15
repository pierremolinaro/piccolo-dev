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
echo "-------------- multiple_pages" &&
piccolo -v -S -O -L multiple_pages.piccolo &&
$GPUTILS_PATH/gpasm multiple_pages.asm -o multiple_pages-2.hex &&
hexcmp multiple_pages.hex multiple_pages-2.hex &&
echo "-------------- interrupt1" &&
piccolo -v -S -O -L interrupt1.piccolo &&
$GPUTILS_PATH/gpasm interrupt1.asm -o interrupt1-2.hex &&
hexcmp interrupt1.hex interrupt1-2.hex &&
echo "-------------- interrupt2" &&
piccolo -v -S -O -L interrupt2.piccolo &&
$GPUTILS_PATH/gpasm interrupt2.asm -o interrupt2-2.hex &&
hexcmp interrupt2.hex interrupt2-2.hex &&
echo "-------------- interrupt3" &&
piccolo -v -S -O -L interrupt3.piccolo &&
$GPUTILS_PATH/gpasm interrupt3.asm -o interrupt3-2.hex &&
hexcmp interrupt3.hex interrupt3-2.hex &&
echo "-------------- interrupt4" &&
piccolo -v -S -O -L interrupt4.piccolo &&
$GPUTILS_PATH/gpasm interrupt4.asm -o interrupt4-2.hex &&
hexcmp interrupt4.hex interrupt4-2.hex &&
echo "-------------- routine1" &&
piccolo -v -S -O -L routine1.piccolo &&
$GPUTILS_PATH/gpasm routine1.asm -o routine1-2.hex &&
hexcmp routine1.hex routine1-2.hex &&
echo "-------------- routine2" &&
piccolo -v -S -O -L routine2.piccolo &&
$GPUTILS_PATH/gpasm routine2.asm -o routine2-2.hex &&
hexcmp routine2.hex routine2-2.hex &&
echo "-------------- routine3" &&
piccolo -v -S -O -L routine3.piccolo &&
$GPUTILS_PATH/gpasm routine3.asm -o routine3-2.hex &&
hexcmp routine3.hex routine3-2.hex &&
echo "-------------- routine4" &&
piccolo -v -S -O -L routine4.piccolo &&
$GPUTILS_PATH/gpasm routine4.asm -o routine4-2.hex &&
hexcmp routine4.hex routine4-2.hex &&
#----
echo "-------------- SUCCES ---------------" ||
echo "-------------- ECHEC ----------------"
