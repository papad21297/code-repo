#!/bin/bash
# ~/.local/bin/norminette -R CheckForbiddenSourceHeader;
cc -Wall -Wextra -Werror rush01/*.c -o main.o;
./main.o | cat -e
