#!/bin/bash
: '
mkdir c02;
mkdir c02/ex00&&touch c02/ex00/ft_strcpy.c;
mkdir c02/ex01&&touch c02/ex01/ft_strncpy.c;
mkdir c02/ex02&&touch c02/ex02/ft_str_is_alpha.c;
mkdir c02/ex03&&touch c02/ex03/ft_str_is_numeric.c;
mkdir c02/ex04&&touch c02/ex04/ft_str_is_lowercase.c;
mkdir c02/ex05&&touch c02/ex05/ft_str_is_uppercase.c;
mkdir c02/ex06&&touch c02/ex06/ft_str_is_printable.c;
mkdir c02/ex07&&touch c02/ex07/ft_strupcase.c;
mkdir c02/ex08&&touch c02/ex08/ft_strlowcase.c;
mkdir c02/ex07&&touch c02/ex09/ft_strcapitalize.c;
mkdir c02/ex08&&touch c02/ex10/ft_strlcpy.c;
mkdir c02/ex01&&touch c02/ex11/ft_put_str_non_printable.c;
mkdir c02/ex02&&touch c02/ex12/ft_print_memory.c;

	c02/ex00/ft_strcpy.c \
	c02/ex01/ft_strncpy.c \
	c02/ex02/ft_str_is_alpha.c \
	c02/ex03/ft_str_is_numeric.c \
	c02/ex04/ft_str_is_lowercase.c \
	c02/ex05/ft_str_is_uppercase.c \
	c02/ex06/ft_str_is_printable.c \
	c02/ex07/ft_strupcase.c \
	c02/ex08/ft_strlowcase.c \
	c02/ex09/ft_strcapitalize.c \
	c02/ex10/ft_strlcpy.c \
	c02/ex11/ft_put_str_non_printable.c \
	c02/ex12/ft_print_memory.c \
'

clear;
cc -Wall -Wextra -Werror main.c \
	c02/ex00/ft_strcpy.c \
	c02/ex01/ft_strncpy.c \
	c02/ex02/ft_str_is_alpha.c \
	c02/ex03/ft_str_is_numeric.c \
	-o main.out;
./main.out