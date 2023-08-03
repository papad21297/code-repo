#!/bin/bash
: '
mkdir c04;
mkdir c04/ex00&&touch c04/ex00/ft_strlen.c;
mkdir c04/ex01&&touch c04/ex01/ft_putstr.c;
mkdir c04/ex02&&touch c04/ex02/ft_putnbr.c;
mkdir c04/ex03&&touch c04/ex03/ft_atoi.c;
mkdir c04/ex04&&touch c04/ex04/ft_putnbr_base.c;
mkdir c04/ex05&&touch c04/ex05/ft_atoi_base.c;

	c04/ex00/ft_strlen.c \
	c04/ex01/ft_putstr.c \
	c04/ex02/ft_putnbr.c \
	c04/ex03/ft_atoi.c \
	c04/ex04/ft_putnbr_base.c \
	c04/ex05/ft_atoi_base.c \

cc -Wall -Wextra -Werror main.c \
	-o main.out;
./main.out
'

clear;
cc -Wall -Wextra -Werror main.c \
	-o main.out;
./main.out