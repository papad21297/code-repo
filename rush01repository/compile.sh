#!/bin/bash
# cls&&%LOCALAPPDATA%\Programs\Python\
# Python311\python.exe
# %USERPROFILE%\Downloads\material\folder_for_
# python_works\copy_current_date_and_time_
# to_clipboard\copy_current_date_and_time_
# to_clipboard.py
clear;
git pull;
# ~/.local/bin/norminette -R CheckForbiddenSourceHeader;
# git pull&&clear&&norminette -R CheckForbiddenSourceHeader rush01;
# cc -Wall -Wextra -Werror rush01/*.c -o main.o;
cc rush01/*.c -o main.o;
./main.o "1 2 2 3 3 1 3 2 1 2 4 2 4 2 1 2" | cat -e
