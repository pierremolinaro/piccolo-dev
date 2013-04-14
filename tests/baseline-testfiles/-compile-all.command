#!/bin/sh
cd `dirname $0` &&
../../makefile_macosx/build.command &&
export GPUTILS_PATH=/usr/local/gputils-1.1.0/bin &&
echo "-------------- 10F206" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror instructions_10F206.piccolo &&
$GPUTILS_PATH/gpasm instructions_10F206.asm -o instructions_10F206-2.hex &&
hexcmp instructions_10F206.hex instructions_10F206-2.hex &&
echo "-------------- 12F519" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror instructions_12F519.piccolo &&
$GPUTILS_PATH/gpasm instructions_12F519.asm -o instructions_12F519-2.hex &&
hexcmp instructions_12F519.hex instructions_12F519-2.hex &&
echo "-------------- 16F505" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror instructions_16F505.piccolo &&
$GPUTILS_PATH/gpasm instructions_16F505.asm -o instructions_16F505-2.hex &&
hexcmp instructions_16F505.hex instructions_16F505-2.hex &&
echo "-------------- 16F59" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror instructions_16F59.piccolo &&
$GPUTILS_PATH/gpasm instructions_16F59.asm -o instructions_16F59-2.hex &&
hexcmp instructions_16F59.hex instructions_16F59-2.hex &&
echo "-------------- 16F57" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror banks_16F57.piccolo &&
$GPUTILS_PATH/gpasm banks_16F57.asm -o banks_16F57-2.hex &&
hexcmp banks_16F57.hex banks_16F57-2.hex &&
#----
echo "-------------- SUCCES ---------------"
