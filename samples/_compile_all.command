#!/bin/sh
export GPUTILS_PATH=/usr/local/gputils/0.13.6/bin
cd `dirname $0` &&
#--- Relative branch limits
echo "-------------- relative_branch_limits" &&
piccolo -v -S -O -L relative_branch_limits.piccolo &&
$GPUTILS_PATH/gpasm relative_branch_limits.asm -o relative_branch_limits2.asm &&
hexcmp relative_branch_limits.hex relative_branch_limits2.hex &&
#--- IF and DO tests
echo "-------------- if_do_tests" &&
piccolo -v -S -O -L if_do_tests.piccolo &&
$GPUTILS_PATH/gpasm if_do_tests.asm -o if_do_tests2.asm &&
hexcmp if_do_tests.hex if_do_tests2.hex &&
#--- code_bigger_than_64k
echo "-------------- code_bigger_than_64k" &&
piccolo -v -S -O -L code_bigger_than_64k.piccolo &&
$GPUTILS_PATH/gpasm code_bigger_than_64k.asm -o code_bigger_than_64k-2.asm &&
hexcmp code_bigger_than_64k.hex code_bigger_than_64k-2.hex &&
#--- commonDeclarations
echo "-------------- commonDeclarations" &&
piccolo -v -S -O -L commonDeclarations.piccolo &&
$GPUTILS_PATH/gpasm commonDeclarations.asm -o commonDeclarations-2.asm &&
hexcmp commonDeclarations.hex commonDeclarations-2.hex &&
#--- Blink led
echo "-------------- blink_led" &&
piccolo -v -S -O -L blink_led.piccolo &&
$GPUTILS_PATH/gpasm blink_led.asm -o blink_led-2.asm &&
hexcmp blink_led.hex blink_led-2.hex &&
#--- Blink led sous interruoption
echo "-------------- blink_led_it" &&
piccolo -v -S -O -L blink_led_it.piccolo &&
$GPUTILS_PATH/gpasm blink_led_it.asm -o blink_led_it-2.asm &&
hexcmp blink_led_it.hex blink_led_it-2.hex &&
#----
echo "-------------- SUCCES ---------------" ||
echo "-------------- ECHEC ----------------"
