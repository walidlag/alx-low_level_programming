#!/bin/bash
gcc -Wall -c -fPIC *.c -o object_file
gcc -shared object_file/*.o -o liball.so
