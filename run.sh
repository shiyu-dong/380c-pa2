#!/usr/bin/env bash

echo ../src/csc simple.c > simple.3addr
../src/csc simple.c > simple.3addr
echo python PA2.py simple.3addr > simple.3addr.c
python PA2.py simple.3addr > simple.3addr.c
echo gcc simple.3addr.c
gcc simple.3addr.c
echo ./a.out
./a.out
