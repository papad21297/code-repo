#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strstr(char *str, char *to_find);
void	ft_putchar(char c);
int		corr_ft_strlen(char *str);
int		corr_ft_strlen(char *str);
// https://github.com/MrRobb/42_piscine/blob/master/day05/ex05/main.c

int main(void)
{
	// ======================================================== ex00/ft_strcmp.c
	// variable(s) declaration
	char			*strcmp_str1;
	char			*strcmp_str2;
	// ======================================================= ex01/ft_strncmp.c
	// variable(s) declaration
	char			strncmp_a[100];
	char			strncmp_b[100];
	// ======================================================== ex02/ft_strcat.c
	// variable(s) declaration
	const char		strcat_src1[10] = "abc";
	char			strcat_dest1[10];
	char			strcat_src[10];
	char			strcat_dest[10];
	// ======================================================= ex03/ft_strncat.c
	// variable(s) declaration
	const char		strncat_src1[10] = "abc";
	char			strncat_dest1[13];
	char			strncat_src[10];
	char			strncat_dest[24];
	unsigned int	strncat_nb;
	// ======================================================== ex04/ft_strstr.c
	// variable(s) declaration

	// ======================================================= ex05/ft_strlcat.c
	// variable(s) declaration

	// ======================================================== ex00/ft_strcmp.c
	// assigning variables' values
	strcmp_str1 = "aaac";
	strcmp_str2 = "aaab";
	// ======================================================= ex01/ft_strncmp.c
	// assigning variables' values
	strcpy(strncmp_a, "A0234");
	strcpy(strncmp_b, "A02232");
	// ======================================================== ex02/ft_strcat.c
	// assigning variables' values
	strcpy(strcat_dest1, "123");
	strcpy(strcat_src, "abc");
	strcpy(strcat_dest, "123");
	// ======================================================= ex03/ft_strncat.c
	strcpy(strncat_dest1, "123456789");
	strcpy(strncat_src, "abc");
	strcpy(strncat_dest, "123456789");
	strncat_nb = 5;
	// assigning variables' values
	// ======================================================== ex04/ft_strstr.c
	// assigning variables' values
	// ======================================================= ex05/ft_strlcat.c
	// assigning variables' values
	// =========================================================================
	// ================================================================= testing
	// =========================================================================
	printf("============================================== ex00/ft_strcmp.c\n");
	printf("ft_strcmp: %d ", ft_strcmp(strcmp_str1, strcmp_str2));
	printf("src: \"%s\", ", strcmp_str1);
	printf("Search: \"%s\"", strcmp_str2);
	printf("\\n\n");
	printf("\n");
	printf("============================================= ex01/ft_strncmp.c\n");
	printf("Result '%i'", ft_strncmp(strncmp_a, strncmp_b, 5));
	printf("\\n\n");
	printf("Correction '%i'", strncmp(strncmp_a, strncmp_b, 5));
	printf("\\n\n");
	printf("\n");
	printf("============================================== ex02/ft_strcat.c\n");
	printf("Str: \"%s\"", strcat(strcat_dest1, strcat_src1));
	printf("\\n\n");
	printf("Str: \"%s\"", ft_strcat(strcat_dest, strcat_src));
	printf("\\n\n");
	printf("\n");
	printf("============================================= ex03/ft_strncat.c\n");
	printf("Str: \"%s\"", strncat(strncat_dest1, strncat_src1, strncat_nb));
	printf("\\n\n");
	printf("Str: \"%s\"", ft_strncat(strncat_dest, strncat_src, strncat_nb));
	printf("\\n\n");
	/*
	printf("\n");
	printf("============================================== ex04/ft_strstr.c\n");
	printf("\\n\n");
	printf("\n");
	printf("============================================= ex05/ft_strlcat.c\n");
	printf("\\n\n");
	printf("\n");
	*/
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	corr_ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void corr_ft_putstr(void *str)