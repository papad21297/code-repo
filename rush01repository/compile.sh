#!/bin/bash
clear;
git pull;
# clear&&~/.local/bin/norminette -R CheckForbiddenSourceHeader;
# cc -Wall -Wextra -Werror rush01/*.c -o main.o;
cc rush01/*.c -o main.o;
./main.o "1 2 2 3 3 1 3 2 1 2 4 2 4 2 1 2" | cat -e
