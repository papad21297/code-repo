#!/bin/bash
git pull;
cc -Wall -Wextra -Werror rush01repository/main.c -o rush01repository/main.o;
rush01repository/main.o | cat -e
