#!/bin/bash
: '
mkdir c03;
mkdir c03/ex00&&touch c03/ex00/ft_strcmp.c;
mkdir c03/ex01&&touch c03/ex01/ft_strncmp.c;
mkdir c03/ex02&&touch c03/ex02/ft_strcat.c;
mkdir c03/ex03&&touch c03/ex03/ft_strncat.c;
mkdir c03/ex04&&touch c03/ex04/ft_strstr.c;
mkdir c03/ex05&&touch c03/ex05/ft_strlcat.c;

	c03/ex00/ft_strcmp.c \
	c03/ex01/ft_strncmp.c \
	c03/ex02/ft_strcat.c \
	c03/ex03/ft_strncat.c \
	c03/ex04/ft_strstr.c \
	c03/ex05/ft_strlcat.c \

cc -Wall -Wextra -Werror main.c \
	-o main.out;
./main.out
'

clear;
cc -Wall -Wextra -Werror main.c \
	c03/ex00/ft_strcmp.c \
	c03/ex01/ft_strncmp.c \
	c03/ex02/ft_strcat.c \
	c03/ex03/ft_strncat.c \
	c03/ex04/ft_strstr.c \
	c03/ex05/ft_strlcat.c \
	-o main.out;
./main.out