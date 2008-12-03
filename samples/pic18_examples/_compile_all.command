#!/bin/sh
export GPUTILS_PATH=/usr/local/gputils/0.13.6/bin
cd `dirname $0` &&
#--- Relative branch limits
echo "-------------- relative_branch_limits" &&
piccolo -v -S -O -L relative_branch_limits.piccolo &&
$GPUTILS_PATH/gpasm relative_branch_limits.asm -o relative_branch_limits2.hex &&
hexcmp relative_branch_limits.hex relative_branch_limits2.hex &&
#--- IF and DO tests
echo "-------------- if_do_tests" &&
piccolo -v -S -O -L if_do_tests.piccolo &&
$GPUTILS_PATH/gpasm if_do_tests.asm -o if_do_tests2.asm &&
hexcmp if_do_tests.hex if_do_tests2.hex &&
#--- code_bigger_than_64k
echo "-------------- code_bigger_than_64k" &&
piccolo -v -S -O -L code_bigger_than_64k.piccolo &&
$GPUTILS_PATH/gpasm code_bigger_than_64k.asm -o code_bigger_than_64k-2.hex &&
hexcmp code_bigger_than_64k.hex code_bigger_than_64k-2.hex &&
#--- commonDeclarations
echo "-------------- commonDeclarations" &&
piccolo -v -S -O -L commonDeclarations.piccolo &&
$GPUTILS_PATH/gpasm commonDeclarations.asm -o commonDeclarations-2.hex &&
hexcmp commonDeclarations.hex commonDeclarations-2.hex &&
#--- Blink led
echo "-------------- blink_led" &&
piccolo -v -S -O -L blink_led.piccolo &&
$GPUTILS_PATH/gpasm blink_led.asm -o blink_led-2.hex &&
hexcmp blink_led.hex blink_led-2.hex &&
#--- Blink led sous interruoption
echo "-------------- blink_led_it" &&
piccolo -v -S -O -L blink_led_it.piccolo &&
$GPUTILS_PATH/gpasm blink_led_it.asm -o blink_led_it-2.hex &&
hexcmp blink_led_it.hex blink_led_it-2.hex &&
#--- Exemples BSR
echo "-------------- exemples_bsr" &&
piccolo -v -S -O -L exemples_bsr.piccolo &&
$GPUTILS_PATH/gpasm exemples_bsr.asm -o exemples_bsr-2.hex &&
hexcmp exemples_bsr.hex exemples_bsr-2.hex &&
#--- Optimisations
echo "-------------- optimizations" &&
piccolo -v -S -O -L optimizations.piccolo &&
$GPUTILS_PATH/gpasm optimizations.asm -o optimizations-2.hex &&
hexcmp optimizations.hex optimizations-2.hex &&
#--- Computed RCALL
echo "-------------- Computed RCALL" &&
piccolo -v -S -O -L computed_rcall_samples.piccolo &&
$GPUTILS_PATH/gpasm computed_rcall_samples.asm -o computed_rcall_samples-2.hex &&
hexcmp computed_rcall_samples.hex computed_rcall_samples-2.hex &&
#----
echo "-------------- SUCCES ---------------" ||
echo "-------------- ECHEC ----------------"
