#!/bin/bash
: '
	c08/ex00/ft.h \
	c08/ex01/ft_boolean.h \
	c08/ex02/ft_abs.h \
	c08/ex03/ft_point.h \
	c08/ex04/ft_strs_to_tab.c \
	c08/ex05/ft_show_tab.c \
'
clear;
cc -Wall -Wextra -Werror main.c \
	c08/ex02/ft_abs.h \
	-o main.out;
./main.out