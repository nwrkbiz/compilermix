#!/bin/bash
WORKDIR=$(pwd)
echo "###### Clean: ######"
$WORKDIR/clean.sh
echo "###### Build static Foo lib: ######"
$WORKDIR/build_lib.sh
echo "###### Build foo manipulation shared object: ######"
$WORKDIR/so/build_so.sh
echo "###### Building Binary: ######"
$WORKDIR/build_test.sh
export LD_LIBRARY_PATH=$WORKDIR
echo "###### Executing Binary: ######"
$WORKDIR/test_foo
