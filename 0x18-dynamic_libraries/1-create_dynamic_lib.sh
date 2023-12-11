#!/bin/bash
gcc -Wall -Wextra -Werror -pendatic -c fpic *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY=.:$LD_LIBRARY_PATH
