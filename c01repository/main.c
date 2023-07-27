#include <stdio.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	// ============================================================ ex00/ft_ft.c
	int	number;
	int	*ptr_number;
	// =================================================== ex01/ft_ultimate_ft.c
	int ultimate_number;
	int *ptr_ultimate_number;
	int **ptr_ptr_ultimate_number;
	int ***ptr_ptr_ptr_ultimate_number;
	int ****ptr_ptr_ptr_ptr_ultimate_number;
	int *****ptr_ptr_ptr_ptr_ptr_ultimate_number;
	int ******ptr_ptr_ptr_ptr_ptr_ptr_ultimate_number;
	int *******ptr_ptr_ptr_ptr_ptr_ptr_ptr_ultimate_number;
	int ********ptr_ptr_ptr_ptr_ptr_ptr_ptr_ptr_ultimate_number;
	int *********ptr_ptr_ptr_ptr_ptr_ptr_ptr_ptr_ptr_ultimate_number;
	// ========================================================== ex02/ft_swap.c
	int a;
	int	*ptr_a;
	int b;
	int	*ptr_b;
	// ======================================================= ex03/ft_div_mod.c
	int div_mod_a;
	int div_mod_b;
	int _div;
	int	*ptr_div;
	int _mod;
	int	*ptr_mod;
	// ============================================== ex04/ft_ultimate_div_mod.c
	int ultimate_div_mod_a;
	int ultimate_div_mod_b;
	int *ptr_ultimate_div_mod_a;
	int *ptr_ultimate_div_mod_b;

	// ============================================================ ex00/ft_ft.c
	ptr_number = &number;
	// =================================================== ex01/ft_ultimate_ft.c
	ptr_ultimate_number = &ultimate_number;
	ptr_ptr_ultimate_number = &ptr_ultimate_number;
	ptr_ptr_ptr_ultimate_number = &ptr_ptr_ultimate_number;
	ptr_ptr_ptr_ptr_ultimate_number = &ptr_ptr_ptr_ultimate_number;
	ptr_ptr_ptr_ptr_ptr_ultimate_number = &ptr_ptr_ptr_ptr_ultimate_number;
	ptr_ptr_ptr_ptr_ptr_ptr_ultimate_number
		= &ptr_ptr_ptr_ptr_ptr_ultimate_number;
	ptr_ptr_ptr_ptr_ptr_ptr_ptr_ultimate_number
		= &ptr_ptr_ptr_ptr_ptr_ptr_ultimate_number;
	ptr_ptr_ptr_ptr_ptr_ptr_ptr_ptr_ultimate_number
		= &ptr_ptr_ptr_ptr_ptr_ptr_ptr_ultimate_number;
	ptr_ptr_ptr_ptr_ptr_ptr_ptr_ptr_ptr_ultimate_number
		= &ptr_ptr_ptr_ptr_ptr_ptr_ptr_ptr_ultimate_number;
	// ========================================================== ex02/ft_swap.c
	a = 40;
	ptr_a = &a;
	b = 31;
	ptr_b = &b;
	// ======================================================= ex03/ft_div_mod.c
	div_mod_a = 7;
	div_mod_b = 2;
	ptr_div = &_div;
	ptr_mod = &_mod;
	// ============================================== ex04/ft_ultimate_div_mod.c
	ultimate_div_mod_a = 29;
	ultimate_div_mod_b = 5;
	ptr_ultimate_div_mod_a = &ultimate_div_mod_a;
	ptr_ultimate_div_mod_b = &ultimate_div_mod_b;
	// ================================================================= testing
	printf("================================================== ex00/ft_ft.c\n");
	ft_ft(ptr_number);
	printf("number: \"%d\"", number);
	printf("\\n\n");
	printf("\n");
	printf("========================================= ex01/ft_ultimate_ft.c\n");
	ft_ultimate_ft(ptr_ptr_ptr_ptr_ptr_ptr_ptr_ptr_ptr_ultimate_number);
	printf("number: \"%d\"", ultimate_number);
	printf("\\n\n");
	printf("\n");
	printf("================================================ ex02/ft_swap.c\n");
	printf("previously: a: \"%d\", b: \"%d\"", a, b);
	ft_swap(ptr_a, ptr_b);
	printf("\\n\n");
	printf("now: a: \"%d\", b: \"%d\"", a, b);
	printf("\\n\n");
	printf("\n");
	printf("============================================= ex03/ft_div_mod.c\n");
	ft_div_mod(div_mod_a, div_mod_b, ptr_div, ptr_mod);
	printf("a: \"%d\", b: \"%d\", div: \"%d\", mod: \"%d\"", div_mod_a,
		div_mod_b, _div, _mod);
	printf("\\n\n");
	printf("\n");
	printf("==================================== ex04/ft_ultimate_div_mod.c\n");
	ft_ultimate_div_mod(ptr_ultimate_div_mod_a, ptr_ultimate_div_mod_b);
	printf("a: \"%d\", b: \"%d\"", ultimate_div_mod_a, ultimate_div_mod_b);
	printf("\\n\n");
	printf("\n");
}
