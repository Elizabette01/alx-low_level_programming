#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -fpic *.C
gcc -shared *.o -o libdynamic.so
