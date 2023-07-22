#!/bin/bash
clear;
git pull;
# ~/.local/bin/norminette -R CheckForbiddenSourceHeader;
# cc -Wall -Wextra -Werror rush01/*.c -o main.o;
cc rush01/*.c -o main.o "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
./main.o | cat -e
