#!/bin/bash

gcc -c *.c
gcc -shared -fpic -o liball.so *.o
