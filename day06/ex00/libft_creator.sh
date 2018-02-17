#!/bin/sh
gcc -c *.c -Wall -Wextra -Werror
ar rc libft.a *.o
find ./ -name "*.o" -delete;
