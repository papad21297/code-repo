#!/bin/bash
: '
	c04/ex00/ft_strlen.c \
	c04/ex01/ft_putstr.c \
	c04/ex02/ft_putnbr.c \
	c04/ex03/ft_atoi.c \
	c04/ex04/ft_putnbr_base.c \
	c04/ex05/ft_atoi_base.c \
'

clear;
cc -Wall -Wextra -Werror main.c \
	c04/ex00/ft_strlen.c \
	c04/ex01/ft_putstr.c \
	c04/ex02/ft_putnbr.c \
	c04/ex03/ft_atoi.c \
	-o main.out;
./main.out