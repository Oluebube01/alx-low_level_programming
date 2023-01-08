#!/bin/bash
gcc -WALL -pendatic -Werror -Wextra -c * .c
ar -rc liball.a *.o
ranlib liball.a
