#!/bin/bash

if [ -f "./*.o" ]; then
  rm ./*.o
fi

gcc *.c -c
ar rc liball.a *.o

echo y| rm -I *.o
