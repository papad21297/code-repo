#!/bin/bash
git pull;
cc -Wall -Wextra -Werror rush01repository/main.c rush01repository/rush01/*.c -o rush01repository/main.o;
rush01repository/main.o | cat -e
