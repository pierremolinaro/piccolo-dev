#!/bin/sh
cd `dirname $0` &&
../../makefile_macosx/build.command &&
export GPUTILS_PATH=/usr/local/gputils-1.2.0/bin &&
#--- Relative branch limits
echo "-------------- relative_branch_limits" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror relative_branch_limits.piccolo &&
$GPUTILS_PATH/gpasm relative_branch_limits.asm -o relative_branch_limits2.hex &&
hexcmp relative_branch_limits.hex relative_branch_limits2.hex &&
#--- IF and DO tests
echo "-------------- if_do_tests" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror if_do_tests.piccolo &&
$GPUTILS_PATH/gpasm if_do_tests.asm -o if_do_tests2.asm &&
hexcmp if_do_tests.hex if_do_tests2.hex &&
#--- code_bigger_than_64k
echo "-------------- code_bigger_than_64k" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror code_bigger_than_64k.piccolo &&
$GPUTILS_PATH/gpasm code_bigger_than_64k.asm -o code_bigger_than_64k-2.hex &&
hexcmp code_bigger_than_64k.hex code_bigger_than_64k-2.hex &&
#--- Blink led 18F448
echo "-------------- blink_led_18F448" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror blink_led_18F448.piccolo &&
$GPUTILS_PATH/gpasm blink_led_18F448.asm -o blink_led_18F448-2.hex &&
hexcmp blink_led_18F448.hex blink_led_18F448-2.hex &&
#--- Blink led 18F4480
echo "-------------- blink_led_18F4480" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror blink_led_18F4480.piccolo &&
$GPUTILS_PATH/gpasm blink_led_18F4480.asm -o blink_led_18F4480-2.hex &&
hexcmp blink_led_18F4480.hex blink_led_18F4480-2.hex &&
#--- Blink led sous interruption 18F448
echo "-------------- blink_led_it_18F448" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror blink_led_it_18F448.piccolo &&
$GPUTILS_PATH/gpasm blink_led_it_18F448.asm -o blink_led_it_18F448-2.hex &&
hexcmp blink_led_it_18F448.hex blink_led_it_18F448-2.hex &&
#--- Exemples BSR
echo "-------------- exemples_bsr" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror exemples_bsr.piccolo &&
$GPUTILS_PATH/gpasm exemples_bsr.asm -o exemples_bsr-2.hex &&
hexcmp exemples_bsr.hex exemples_bsr-2.hex &&
#--- Optimisations
echo "-------------- optimizations" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror optimizations.piccolo &&
$GPUTILS_PATH/gpasm optimizations.asm -o optimizations-2.hex &&
hexcmp optimizations.hex optimizations-2.hex &&
#--- repetition_statique_pic18
echo "-------------- repetition_statique_pic18" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror repetition_statique_pic18.piccolo &&
$GPUTILS_PATH/gpasm repetition_statique_pic18.asm -o repetition_statique_pic18-2.hex &&
hexcmp repetition_statique_pic18.hex repetition_statique_pic18-2.hex &&
#--- Computed RCALL
echo "-------------- Computed RCALL" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror computed_rcall_samples.piccolo &&
$GPUTILS_PATH/gpasm computed_rcall_samples.asm -o computed_rcall_samples-2.hex &&
hexcmp computed_rcall_samples.hex computed_rcall_samples-2.hex &&
#--- Bootloader specification
echo "-------------- Bootloader specification" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror bootloader_specification.piccolo &&
#--- Bootloader implementation
echo "-------------- Bootloader implementation" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror bootloader_implementation.piccolo &&
$GPUTILS_PATH/gpasm bootloader_implementation.asm -o bootloader_implementation-2.hex &&
hexcmp bootloader_implementation.hex bootloader_implementation-2.hex &&
#--- Bootloader user program
echo "-------------- Bootloader user program" &&
../../makefile_macosx/piccolo -v -S -O -L --Werror bootloader_user_program.piccolo &&
$GPUTILS_PATH/gpasm bootloader_user_program.asm -o bootloader_user_program-2.hex &&
hexcmp bootloader_user_program.hex bootloader_user_program-2.hex &&
#----
echo "-------------- SUCCES ---------------"
