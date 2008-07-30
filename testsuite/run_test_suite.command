#!/bin/sh
export GPUTILS_PATH=/usr/local/gputils/0.13.6/bin
cd `dirname $0` &&
#--- Relative branch limits
piccolo -v relative_branch_limits.piccolo &&
piccolo -S relative_branch_limits.piccolo &&
$GPUTILS_PATH/gpasm relative_branch_limits.asm -o relative_branch_limits2.asm &&
/Users/pierremolinaro/Desktop/hexcmp-0.2/hexcmp-0.2/hexcmp relative_branch_limits.hex relative_branch_limits2.hex &&
#--- IF and DO tests
piccolo -v if_do_tests.piccolo &&
piccolo -S if_do_tests.piccolo &&
$GPUTILS_PATH/gpasm if_do_tests.asm -o if_do_tests2.asm &&
/Users/pierremolinaro/Desktop/hexcmp-0.2/hexcmp-0.2/hexcmp if_do_tests.hex if_do_tests2.hex &&
#--- IF and DO tests
piccolo -v -O code_bigger_than_64k.piccolo &&
piccolo -S -O code_bigger_than_64k.piccolo &&
$GPUTILS_PATH/gpasm code_bigger_than_64k.asm -o code_bigger_than_64k_2.asm &&
/Users/pierremolinaro/Desktop/hexcmp-0.2/hexcmp-0.2/hexcmp code_bigger_than_64k.hex code_bigger_than_64k_2.hex
