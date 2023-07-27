#!/bin/bash
: '
mkdir c01;
mkdir c01/ex00&&touch c01/ex00/ft_ft.c;
mkdir c01/ex01&&touch c01/ex01/ft_ultimate_ft.c;
mkdir c01/ex02&&touch c01/ex02/ft_swap.c;
mkdir c01/ex03&&touch c01/ex03/ft_div_mod.c;
mkdir c01/ex04&&touch c01/ex04/ft_ultimate_div_mod.c;
mkdir c01/ex05&&touch c01/ex05/ft_putstr.c;
mkdir c01/ex06&&touch c01/ex06/ft_strlen.c;
mkdir c01/ex07&&touch c01/ex07/ft_rev_int_tab.c;
mkdir c01/ex08&&touch c01/ex08/ft_sort_int_tab.c;

	c01/ex00/ft_ft.c \
	c01/ex01/ft_ultimate_ft.c \
	c01/ex02/ft_swap.c \
	c01/ex03/ft_div_mod.c \
	c01/ex04/ft_ultimate_div_mod.c \
	c01/ex05/ft_putstr.c \
	c01/ex06/ft_strlen.c \
	c01/ex07/ft_rev_int_tab.c \
	c01/ex08/ft_sort_int_tab.c \
'
clear;
cc -Wall -Wextra -Werror main.c \
	c01/ex00/ft_ft.c \
	c01/ex01/ft_ultimate_ft.c \
	c01/ex02/ft_swap.c \
	c01/ex03/ft_div_mod.c \
	c01/ex04/ft_ultimate_div_mod.c \
	-o main.out;
./main.out