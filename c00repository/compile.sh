#!/bin/bash
clear;
cc -Wall -Wextra -Werror main.c \
    c00/ex00/ft_putchar.c \
    c00/ex01/ft_print_alphabet.c \
    c00/ex02/ft_print_reverse_alphabet.c \
    c00/ex03/ft_print_numbers.c \
    c00/ex04/ft_is_negative.c \
    c00/ex05/ft_print_comb.c \
    c00/ex06/ft_print_comb2.c \
    -o main.out;
./main.out