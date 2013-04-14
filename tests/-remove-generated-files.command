#!/bin/sh
cd `dirname $0` &&
baseline-testfiles/-remove-generated-files.command &&
midrange-tests/-remove-generated-files.command &&
pic18-tests/-remove-generated-files.command

