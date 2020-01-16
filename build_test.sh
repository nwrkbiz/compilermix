#!/bin/bash
g++ -std=c++11 -fPIC main.cpp -L. -lfoo_manip  -lfoo -o test_foo
chmod u+x test_foo
