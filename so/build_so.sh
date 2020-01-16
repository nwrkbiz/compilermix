#!/bin/bash
clang -std=c++17 so/foo_manip.cpp -fPIC  -shared -o libfoo_manip.so
