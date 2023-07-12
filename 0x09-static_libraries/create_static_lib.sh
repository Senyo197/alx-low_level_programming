#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar scr liball.a *.o
