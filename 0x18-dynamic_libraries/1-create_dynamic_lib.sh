#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -FPIC *.c
gcc -shared -o liball.so *.0
export LD_LIBRARY_PATH=. :SLD_LIBRARY_PATH
