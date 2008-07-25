#!/bin/sh
cd `dirname $0` &&
#--- Relative branch limits
piccolo -v relative_branch_limits.piccolo &&
piccolo -s relative_branch_limits.piccolo &&
/usr/local/gputils/0.13.5/bin/gpasm relative_branch_limits.asm -o relative_branch_limits2.asm &&
/Users/pierremolinaro/Desktop/hexcmp-0.2/hexcmp-0.2/hexcmp relative_branch_limits.hex relative_branch_limits2.hex &&
#--- IF and DO tests
piccolo -v if_do_tests.piccolo &&
piccolo -s if_do_tests.piccolo &&
/usr/local/gputils/0.13.5/bin/gpasm if_do_tests.asm -o if_do_tests2.asm &&
/Users/pierremolinaro/Desktop/hexcmp-0.2/hexcmp-0.2/hexcmp if_do_tests.hex if_do_tests2.hex
