#!/bin/sh
cd `dirname $0` &&
../../makefile-macosx/build.py &&
export GPUTILS_PATH=/usr/local/gputils-1.2.0/bin &&
echo "-------------- 10F204" &&
../../makefile-macosx/piccolo -v -S -O -L --Werror blink_led_10F204.piccolo &&
$GPUTILS_PATH/gpasm blink_led_10F204.asm -o blink_led_10F204-2.hex &&
hexcmp blink_led_10F204.hex blink_led_10F204-2.hex &&
echo "-------------- 10F206" &&
../../makefile-macosx/piccolo -v -S -O -L --Werror instructions_10F206.piccolo &&
$GPUTILS_PATH/gpasm instructions_10F206.asm -o instructions_10F206-2.hex &&
hexcmp instructions_10F206.hex instructions_10F206-2.hex &&
echo "-------------- 12F510" &&
../../makefile-macosx/piccolo -v -S -O -L --Werror blink_led_pages_12F510.piccolo &&
$GPUTILS_PATH/gpasm blink_led_pages_12F510.asm -o blink_led_pages_12F510-2.hex &&
hexcmp blink_led_pages_12F510.hex blink_led_pages_12F510-2.hex &&
echo "-------------- 12F519" &&
../../makefile-macosx/piccolo -v -S -O -L --Werror instructions_12F519.piccolo &&
$GPUTILS_PATH/gpasm instructions_12F519.asm -o instructions_12F519-2.hex &&
hexcmp instructions_12F519.hex instructions_12F519-2.hex &&
echo "-------------- 16F505" &&
../../makefile-macosx/piccolo -v -S -O -L --Werror instructions_16F505.piccolo &&
$GPUTILS_PATH/gpasm instructions_16F505.asm -o instructions_16F505-2.hex &&
hexcmp instructions_16F505.hex instructions_16F505-2.hex &&
echo "-------------- 16F59" &&
../../makefile-macosx/piccolo -v -S -O -L --Werror instructions_16F59.piccolo &&
$GPUTILS_PATH/gpasm instructions_16F59.asm -o instructions_16F59-2.hex &&
hexcmp instructions_16F59.hex instructions_16F59-2.hex &&
echo "-------------- 16F57" &&
../../makefile-macosx/piccolo -v -S -O -L --Werror banks_16F57.piccolo &&
$GPUTILS_PATH/gpasm banks_16F57.asm -o banks_16F57-2.hex &&
hexcmp banks_16F57.hex banks_16F57-2.hex &&
echo "-------------- Pages 12F510" &&
../../makefile-macosx/piccolo -v -S -O -L --Werror pages_12F510.piccolo &&
$GPUTILS_PATH/gpasm pages_12F510.asm -o pages_12F510-2.hex &&
hexcmp pages_12F510.hex pages_12F510-2.hex &&
echo "-------------- Optimizations 12F510" &&
../../makefile-macosx/piccolo -v -S -O -L --Werror optimizations_12F510.piccolo &&
$GPUTILS_PATH/gpasm optimizations_12F510.asm -o optimizations_12F510-2.hex &&
hexcmp optimizations_12F510.hex optimizations_12F510-2.hex &&
echo "-------------- Pages 16F59" &&
../../makefile-macosx/piccolo -v -S -O -L --Werror pages_16F59.piccolo &&
$GPUTILS_PATH/gpasm pages_16F59.asm -o pages_16F59-2.hex &&
hexcmp pages_16F59.hex pages_16F59-2.hex &&
echo "-------------- Répétition statique" &&
../../makefile-macosx/piccolo -v -S -O -L --Werror repetition_statique_baseline.piccolo &&
$GPUTILS_PATH/gpasm repetition_statique_baseline.asm -o repetition_statique_baseline-2.hex &&
hexcmp repetition_statique_baseline.hex repetition_statique_baseline-2.hex &&
#----
echo "-------------- SUCCES ---------------"
