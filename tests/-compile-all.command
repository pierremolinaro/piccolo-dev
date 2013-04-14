#!/bin/sh
cd `dirname $0` &&
baseline-testfiles/-compile-all.command &&
midrange-tests/-compile-all.command &&
pic18-tests/-compile-all.command

