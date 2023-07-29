#include <stdio.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);

int main(void)
{
	// ========================================================== 00/ft_strlen.c
	// variable declaration
	char	*strlen_str;
	// ========================================================== 01/ft_putstr.c
	// variable declaration
	char	*putstr_str;
	// ========================================================== 02/ft_putnbr.c
	// variable declaration
	int	putnbr_nb;
	// ============================================================ 03/ft_atoi.c
	// variable declaration
	char	*atoi_str;
	// ===================================================== 04/ft_putnbr_base.c
	// variable declaration
	// ======================================================= 05/ft_atoi_base.c
	// variable declaration

	// ========================================================== 00/ft_strlen.c
	// variable value assigning
	strlen_str = "abcdefghij";
	// ========================================================== 01/ft_putstr.c
	// variable value assigning
	putstr_str = "Hello, readers!";
	// ========================================================== 02/ft_putnbr.c
	// variable value assigning
	putnbr_nb = 12412;
	// ============================================================ 03/ft_atoi.c
	// variable value assigning
	atoi_str = "    ---+--+1234ab567";
	// ===================================================== 04/ft_putnbr_base.c
	// variable value assigning
	// ======================================================= 05/ft_atoi_base.c
	// variable value assigning
	// ================================================================= testing

	printf("================================================ 00/ft_strlen.c\n");
	printf("the string \"%s\" is %d characters long", strlen_str,
		ft_strlen(strlen_str));
	printf("\\n\n");
	printf("\n");
	printf("================================================ 01/ft_putstr.c\n");
	ft_putstr(putstr_str);
	printf("\\n\n");
	printf("\n");
	printf("================================================ 02/ft_putnbr.c\n");
	ft_putnbr(putnbr_nb);
	printf("\\n\n");
	printf("\n");
	printf("================================================== 03/ft_atoi.c\n");
	printf("the string 'str' \"%s\" is an integer ", atoi_str);
	printf("\\n\n");
	printf("'%d' when converted to int with the ", ft_atoi(atoi_str));
	printf("\\n\n");
	printf("function `ft_atoi`");
	printf("\\n\n");
	printf("\n");
	printf("=========================================== 04/ft_putnbr_base.c\n");
	printf("\\n\n");
	printf("\n");
	printf("============================================= 05/ft_atoi_base.c\n");
	printf("\\n\n");
	printf("\n");
	return (0);
}
