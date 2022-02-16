#!/bin/bash

gcc -g -O -c *.c
ar rc liball.a *.c
ranlib liball.c
