#!/bin/bash
gcc -c -Wall -pendatic -Werror -Wextra *.c
ar -rcs liball.a *.o
