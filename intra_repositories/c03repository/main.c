#include <stdio.h>
#include <string.h>

int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
char			*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	// ======================================================== ex00/ft_strcmp.c
	// variable(s) declaration
	char	*strcmp_s1;
	char	*strcmp_s2;
	// ======================================================= ex01/ft_strncmp.c
	// variable(s) declaration
	char	*strncmp_s1;
	char	*strncmp_s2;
	int		strncmp_n;
	// ======================================================== ex02/ft_strcat.c
	// variable(s) declaration
	char	strcat_dest[100];
	char	_strcat_dest[100];
	char	*strcat_src;
	// ======================================================= ex03/ft_strncat.c
	// variable(s) declaration
	char	strncat_dest[100];
	char	_strncat_dest[100];
	char	*strncat_src;
	int		strncat_nb;
	// ======================================================== ex04/ft_strstr.c
	// variable(s) declaration
	char	*strstr_str;
	char	*strstr_to_find;
	char	*strstr_return;
	// ======================================================= ex05/ft_strlcat.c
	// variable(s) declaration
	char			strlcat_dest[100];
	char			_strlcat_dest[100];
	char			*strlcat_src;
	unsigned int	strlcat_size;

	// ======================================================== ex00/ft_strcmp.c
	// assigning variables' values
	strcmp_s1 = "ABCDE";
	strcmp_s2 = "ABCD";
	// ======================================================= ex01/ft_strncmp.c
	// assigning variables' values
	strncmp_s1 = "XYZCBC";
	strncmp_s2 = "XYZABC";
	strncmp_n = 4;
	// ======================================================== ex02/ft_strcat.c
	// assigning variables' values
	strcpy(strcat_dest, "BLACK");
	strcpy(_strcat_dest, "_BLACK");
	strcat_src = "PINK";
	// ======================================================= ex03/ft_strncat.c
	// assigning variables' values
	strcpy(strncat_dest, "BANGTAN");
	strcpy(_strncat_dest, "_BANGTAN");
	strncat_src = "_SONYEONDAN!";
	strncat_nb = 16;
	// ======================================================== ex04/ft_strstr.c
	// assigning variables' values
	strstr_str = "ABCDEFG";
	strstr_to_find = "EF";
	// ======================================================= ex05/ft_strlcat.c
	// assigning variables' values
	strcpy(strlcat_dest, "attention");
	strcpy(_strlcat_dest, "_attention");
	strlcat_src = "_everyone!";
	strlcat_size = 12;
	// =========================================================================
	// ================================================================= testing
	// =========================================================================
	printf("============================================== ex00/ft_strcmp.c\n");
	printf("s1: \"%s\"", strcmp_s1);
	printf("\\n\n");
	printf("s2: \"%s\"", strcmp_s2);
	printf("\\n\n");
	printf("strcmp between s1 and s2: '%d'", strcmp(strcmp_s1, strcmp_s2));
	printf("\\n\n");
	printf("ft_strcmp between s1 and s2: '%d'",
		ft_strcmp(strcmp_s1, strcmp_s2));
	printf("\\n\n");
	printf("\n");
	printf("============================================= ex01/ft_strncmp.c\n");
	printf("s1: \"%s\"", strncmp_s1);
	printf("\\n\n");
	printf("s2: \"%s\"", strncmp_s2);
	printf("\\n\n");
	printf("strncmp between s1 and s2: '%d'", strncmp(strncmp_s1, strncmp_s2,
		strncmp_n));
	printf("\\n\n");
	printf("ft_strncmp between s1 and s2: '%d'", ft_strncmp(strncmp_s1,
		strncmp_s2, strncmp_n));
	printf("\\n\n");
	printf("\n");
	printf("============================================== ex02/ft_strcat.c\n");
	printf("dest: \"%s\"", strcat_dest);
	printf("\\n\n");
	printf("src: \"%s\"", strcat_src);
	printf("\\n\n");
	strcat(strcat_dest, strcat_src);
	printf("strcat between dest and src: \"%s\"", strcat_dest);
	printf("\\n\n");
	ft_strcat(_strcat_dest, strcat_src);
	printf("ft_strcat between dest and src: \"%s\"", _strcat_dest);
	printf("\\n\n");
	printf("\n");
	printf("============================================= ex03/ft_strncat.c\n");
	printf("dest: \"%s\"", strncat_dest);
	printf("\\n\n");
	printf("src: \"%s\"", strncat_src);
	printf("\\n\n");
	strncat(strncat_dest, strncat_src, strncat_nb);
	printf("strncat between dest and src: \"%s\"", strncat_dest);
	printf("\\n\n");
	ft_strncat(_strncat_dest, strncat_src, strncat_nb);
	printf("ft_strncat between dest and src: \"%s\"", _strncat_dest);
	printf("\\n\n");
	printf("\n");
	printf("============================================== ex04/ft_strstr.c\n");
	printf("src: \"%s\"", strstr_str);
	printf("\\n\n");
	printf("to_find: \"%s\"", strstr_to_find);
	printf("\\n\n");
	strstr_return = strstr(strstr_str, strstr_to_find);
	printf("strstr on str using to_find: \"%s\"", strstr_return);
	printf("\\n\n");
	strstr_return = ft_strstr(strstr_str, strstr_to_find);
	printf("ft_strstr on str using to_find: \"%s\"", strstr_return);
	printf("\\n\n");
	printf("\n");
	printf("============================================= ex05/ft_strlcat.c\n");
	printf("dest: \"%s\"", strlcat_dest);
	printf("\\n\n");
	printf("src: \"%s\"", strlcat_src);
	printf("\\n\n");
	printf("strlcat between dest and src: ");
	printf("\"%s\" with the returning integer of '%lu'", strlcat_dest,
		strlcat(strlcat_dest, strlcat_src, strlcat_size));
	printf("\\n\n");
	printf("_dest: \"%s\"", _strlcat_dest);
	printf("\\n\n");
	printf("src: \"%s\"", strlcat_src);
	printf("\\n\n");
	printf("ft_strlcat between dest and src: ");
	printf("\"%s\" with the returning integer of '%u'", _strlcat_dest,
		ft_strlcat(_strlcat_dest, strlcat_src, strlcat_size));
	printf("\\n\n");
	printf("\n");
	/*
	*/
	return (0);
}
