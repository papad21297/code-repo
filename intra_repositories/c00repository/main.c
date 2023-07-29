#include <stdio.h>
#include <unistd.h>

/*
C 00 english subject pdf document
https://cdn.intra.42.fr/pdf/pdf/87252/en.subject.pdf
*/

void ft_putchar(char c);
void ft_print_alphabet(void);
void ft_print_reverse_alphabet(void);
void ft_print_numbers(void);
void ft_is_negative(int n);
void ft_print_comb(void);
void ft_print_comb2(void);
void ft_putnbr(int nb);
void ft_print_combn(int n);

int main(void)
{
    char *message;
    int i;

    printf("============================================= ex00/ft_putchar.c\n");
    message = "Hello, World!";
    while (message[i] != '\0')
    {
        write(1, "'", 1);
        ft_putchar(message[i]);
        write(1, "', ", 3);
        i++;
    }
    printf("\\n\n");
    printf("\n");
    printf("====================================== ex01/ft_print_alphabet.c\n");
    ft_print_alphabet();
    printf("\\n\n");
    printf("\n");
    printf("============================== ex02/ft_reverse_print_alphabet.c\n");
    ft_print_reverse_alphabet();
    printf("\\n\n");
    printf("\n");
    printf("======================================= ex03/ft_print_numbers.c\n");
    ft_print_numbers();
    printf("\\n\n");
    printf("\n");
    printf("========================================= ex04/ft_is_negative.c\n");
    ft_is_negative(-20);
    printf("\\n\n");
    ft_is_negative(0);
    printf("\\n\n");
    ft_is_negative(999);
    printf("\\n\n");
    printf("\n");
    printf("========================================== ex05/ft_print_comb.c\n");
    // ft_print_comb();
    printf("\\n\n");
    printf("\n");
    printf("========================================= ex06/ft_print_comb2.c\n");
    // ft_print_comb2();
    printf("\\n\n");
    printf("\n");
    printf("============================================== ex07/ft_putnbr.c\n");
    ft_putnbr(-789);
    printf("\\n\n");
    ft_putnbr(456);
    printf("\\n\n");
    ft_putnbr(-0);
    printf("\\n\n");
    ft_putnbr(-123);
    printf("\\n\n");
    printf("\n");
    printf("========================================= ex08/ft_print_combn.c\n");
    ft_print_combn(3);
    printf("\\n\n");
    printf("\n");
    return (0);
}
