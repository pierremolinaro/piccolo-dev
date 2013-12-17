#!/bin/sh
cd `dirname $0` &&
../../makefile_macosx/build.command &&
export GPUTILS_PATH=/usr/local/gputils-1.2.0/bin &&
echo "-------------- firmware_16F690" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror firmware_16F690.piccolo &&
$GPUTILS_PATH/gpasm firmware_16F690.asm -o firmware_16F690-2.hex &&
hexcmp firmware_16F690.hex firmware_16F690-2.hex &&
echo "-------------- blink_led_12F683" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror blink_led_12F683.piccolo &&
$GPUTILS_PATH/gpasm blink_led_12F683.asm -o blink_led_12F683-2.hex &&
hexcmp blink_led_12F683.hex blink_led_12F683-2.hex &&
echo "-------------- blink_led_it_12F683" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror blink_led_it_12F683.piccolo &&
$GPUTILS_PATH/gpasm blink_led_it_12F683.asm -o blink_led_it_12F683-2.hex &&
hexcmp blink_led_it_12F683.hex blink_led_it_12F683-2.hex &&
echo "-------------- if_semi_colon" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror if_semi_colon.piccolo &&
$GPUTILS_PATH/gpasm if_semi_colon.asm -o if_semi_colon-2.hex &&
hexcmp if_semi_colon.hex if_semi_colon-2.hex &&
#echo "-------------- structured_if (without optimization)" &&
#../../makefile_macosx/piccolo -v -S -L --Werror structured_if.piccolo &&
#$GPUTILS_PATH/gpasm structured_if.asm -o structured_if-2.hex &&
#hexcmp structured_if.hex structured_if-2.hex &&
echo "-------------- structured_if (with optimization)" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror structured_if.piccolo &&
$GPUTILS_PATH/gpasm structured_if.asm -o structured_if-2.hex &&
hexcmp structured_if.hex structured_if-2.hex &&
echo "-------------- multiple_pages" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror multiple_pages.piccolo &&
$GPUTILS_PATH/gpasm multiple_pages.asm -o multiple_pages-2.hex &&
hexcmp multiple_pages.hex multiple_pages-2.hex &&
echo "-------------- blink_led_it_pages_16F690" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror blink_led_it_pages_16F690.piccolo &&
$GPUTILS_PATH/gpasm blink_led_it_pages_16F690.asm -o blink_led_it_pages_16F690-2.hex &&
hexcmp blink_led_it_pages_16F690.hex blink_led_it_pages_16F690-2.hex &&
echo "-------------- interrupt_16F873_page_0" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror interrupt_16F873_page_0.piccolo &&
$GPUTILS_PATH/gpasm interrupt_16F873_page_0.asm -o interrupt_16F873_page_0-2.hex &&
hexcmp interrupt_16F873_page_0.hex interrupt_16F873_page_0-2.hex &&
echo "-------------- interrupt_16F873_several_pages" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror interrupt_16F873_several_pages.piccolo &&
$GPUTILS_PATH/gpasm interrupt_16F873_several_pages.asm -o interrupt_16F873_several_pages-2.hex &&
hexcmp interrupt_16F873_several_pages.hex interrupt_16F873_several_pages-2.hex &&
echo "-------------- routine1" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror routine1.piccolo &&
$GPUTILS_PATH/gpasm routine1.asm -o routine1-2.hex &&
hexcmp routine1.hex routine1-2.hex &&
echo "-------------- routine2" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror routine2.piccolo &&
$GPUTILS_PATH/gpasm routine2.asm -o routine2-2.hex &&
hexcmp routine2.hex routine2-2.hex &&
echo "-------------- routine3" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror routine3.piccolo &&
$GPUTILS_PATH/gpasm routine3.asm -o routine3-2.hex &&
hexcmp routine3.hex routine3-2.hex &&
echo "-------------- routine4" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror routine4.piccolo &&
$GPUTILS_PATH/gpasm routine4.asm -o routine4-2.hex &&
hexcmp routine4.hex routine4-2.hex &&
echo "-------------- repetition_statique_midrange" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror repetition_statique_midrange.piccolo &&
$GPUTILS_PATH/gpasm repetition_statique_midrange.asm -o repetition_statique_midrange-2.hex &&
hexcmp repetition_statique_midrange.hex repetition_statique_midrange-2.hex &&
#----
echo "-------------- SUCCES ---------------"
