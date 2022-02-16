#!/bin/bash

gcc -g -O -c *.c
gcc *.o -shared -o liball.so
