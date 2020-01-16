#!/bin/bash
rm *.a *.o
g++ -std=c++11 -c -fPIC foo.cpp -o foo.o
g++ -std=c++11 -c -fPIC foo_cii.cpp -o foo_cii.o
ar rcs libfoo.a foo.o foo_cii.o
