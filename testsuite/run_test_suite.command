#!/bin/sh
cd `dirname $0` &&
piccolo -v relative_branch_limits.piccolo &&
piccolo -s relative_branch_limits.piccolo &&
/usr/local/gputils/0.13.5/bin/gpasm relative_branch_limits.asm -o relative_branch_limits2.asm &&
/Users/pierremolinaro/Desktop/hexcmp-0.2/hexcmp-0.2/hexcmp relative_branch_limits.hex relative_branch_limits2.hex