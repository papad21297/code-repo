#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);

int main(void)
{
	// ========================================================== 00/ft_strcpy.c
	char	*strcpy_src;
	char	strcpy_dest[50];
	// ========================================================= 01/ft_strncpy.c
	char	*strncpy_src;
	char	strncpy_dest[6];
	char	strncpy_longer_dest[16];
	// ==================================================== 02/ft_str_is_alpha.c
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	// ================================================== 03/ft_str_is_numeric.c
	char	*is_numeric_str1;
	char	*is_numeric_str2;
	char	*is_numeric_str3;
	// ================================================ 04/ft_str_is_lowercase.c
	char	*is_lowercase_str1;
	char	*is_lowercase_str2;
	char	*is_lowercase_str3;
	char	*is_lowercase_str4;
	// ================================================ 05/ft_str_is_uppercase.c
	char	*is_uppercase_str1;
	char	*is_uppercase_str2;
	char	*is_uppercase_str3;
	char	*is_uppercase_str4;
	// ================================================ 06/ft_str_is_printable.c
	char	*is_printable_str1;
	char	*is_printable_str2;
	char	*is_printable_str3;
	// ======================================================= 07/ft_strupcase.c
	char strupcase_test_str1[20];
	char strupcase_test_str2[20];
	char strupcase_test_str3[1];
	// ====================================================== 08/ft_strlowcase.c
	char strlowcase_test1[20];
	char strlowcase_test2[20];
	char strlowcase_test3[1];
	// =================================================== 09/ft_strcapitalize.c
	char strcapitalize_str1[80];
	char strcapitalize_str2[20];
	char strcapitalize_str3[20];
	// ========================================================= 10/ft_strlcpy.c
	// =========================================== 11/ft_put_str_non_printable.c
	// ==================================================== 12/ft_print_memory.c

	// ========================================================== 00/ft_strcpy.c
	strcpy_src = "Hello, World";
	// ========================================================= 01/ft_strncpy.c
	strncpy_src = "Hello, World!";
	// ==================================================== 02/ft_str_is_alpha.c
	str1 = "Hello";
	str2 = "123";
	str3 = "Test123";
	str4 = "";
	// ================================================== 03/ft_str_is_numeric.c
	is_numeric_str1 = "12345";
	is_numeric_str2 = "Hello123";
	is_numeric_str3 = "";
	// ================================================ 04/ft_str_is_lowercase.c
	is_lowercase_str1 = "hello";
	is_lowercase_str2 = "HELLO";
	is_lowercase_str3 = "Hello";
	is_lowercase_str4 = "";
	// ================================================ 05/ft_str_is_uppercase.c
	is_uppercase_str1 = "HELLO";
	is_uppercase_str2 = "Hello";
	is_uppercase_str3 = "123";
	is_uppercase_str4 = "";
	// ================================================ 06/ft_str_is_printable.c
	is_printable_str1 = "Hello, World!";
	is_printable_str2 = "Testing\tnewline";
	is_printable_str3 = "Testing with special character: -";
	// ======================================================= 07/ft_strupcase.c
	strcpy(strupcase_test_str1, "Hello, World!");
	strcpy(strupcase_test_str2, "This is a Test 123");
	strcpy(strupcase_test_str3, "");
	// ====================================================== 08/ft_strlowcase.c
	strcpy(strlowcase_test1, "Hello, World!");
	strcpy(strlowcase_test2, "This is a TEST");
	strcpy(strlowcase_test3, "");
	// =================================================== 09/ft_strcapitalize.c
	strcpy(strcapitalize_str1,
		"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un");
	strcpy(strcapitalize_str2, "HELLO world");
	strcpy(strcapitalize_str3, "    123test test");
	// ========================================================= 10/ft_strlcpy.c
	// =========================================== 11/ft_put_str_non_printable.c
	// ==================================================== 12/ft_print_memory.c
	// ================================================================= testing

	printf("================================================ 00/ft_strcpy.c\n");
	ft_strcpy(strcpy_dest, strcpy_src);
	printf("Source string: %s", strcpy_src);
	printf("\\n\n");
	printf("Destination string: %s", strcpy_dest);
	printf("\\n\n");
	printf("\n");
	printf("=============================================== 01/ft_strncpy.c\n");
	ft_strncpy(strncpy_dest, strncpy_src, 5);
	printf("Copied string with n=5: \"%s\"", strncpy_dest);
	printf("\\n\n");
	ft_strncpy(strncpy_longer_dest, strncpy_src, 15);
	printf("Copied string with n=15: \"%s\"-", strncpy_longer_dest);
	printf("\\n\n");
	printf("\n");
	printf("========================================== 02/ft_str_is_alpha.c\n");
	printf("str1: \"%s\", result: %d\n", str1, ft_str_is_alpha(str1));
	printf("str2: \"%s\", result: %d\n", str2, ft_str_is_alpha(str2));
	printf("str3: \"%s\", result: %d\n", str3, ft_str_is_alpha(str3));
	printf("str4: \"%s\", result: %d\n", str4, ft_str_is_alpha(str4));
	printf("\\n\n");
	printf("\n");
	printf("======================================== 03/ft_str_is_numeric.c\n");
	if (ft_str_is_numeric(is_numeric_str1))
		printf("\"%s\" is numeric.", is_numeric_str1);
	else
		printf("\"%s\" is not numeric.", is_numeric_str1);
	printf("\\n\n");
	if (ft_str_is_numeric(is_numeric_str2))
		printf("\"%s\" is numeric.", is_numeric_str2);
	else
		printf("\"%s\" is not numeric.", is_numeric_str2);
	printf("\\n\n");
	if (ft_str_is_numeric(is_numeric_str3))
		printf("\"%s\" is numeric.", is_numeric_str3);
	else
		printf("\"%s\" is not numeric.", is_numeric_str3);
	printf("\\n\n");
	printf("\n");
	printf("====================================== 04/ft_str_is_lowercase.c\n");
	printf("str1 is lowercase: %d", ft_str_is_lowercase(is_lowercase_str1));
	printf("\\n\n");
	printf("str1 is lowercase: %d", ft_str_is_lowercase(is_lowercase_str2));
	printf("\\n\n");
	printf("str1 is lowercase: %d", ft_str_is_lowercase(is_lowercase_str3));
	printf("\\n\n");
	printf("str1 is lowercase: %d", ft_str_is_lowercase(is_lowercase_str4));
	printf("\\n\n");
	printf("\n");
	printf("====================================== 05/ft_str_is_uppercase.c\n");
	if (ft_str_is_uppercase(is_uppercase_str1))
		printf("Test 1: Passed");
	else
		printf("Test 1: Failed");
	printf("\\n\n");
	if (ft_str_is_uppercase(is_uppercase_str2))
		printf("Test 2: Passed");
	else
		printf("Test 2: Failed");
	printf("\\n\n");
	if (ft_str_is_uppercase(is_uppercase_str3))
		printf("Test 3: Passed");
	else
		printf("Test 3: Failed");
	printf("\\n\n");
	if (ft_str_is_uppercase(is_uppercase_str4))
		printf("Test 4: Passed");
	else
		printf("Test 4: Failed");
	printf("\\n\n");
	printf("\n");
	printf("====================================== 06/ft_str_is_printable.c\n");
	if (ft_str_is_printable(is_printable_str1))
		printf("str1 is printable.");
	else
		printf("str1 is not printable.");
	printf("\\n\n");
	if (ft_str_is_printable(is_printable_str2))
		printf("str2 is printable.");
	else
		printf("str2 is not printable.");
	printf("\\n\n");
	if (ft_str_is_printable(is_printable_str3))
		printf("str3 is printable.");
	else
		printf("str3 is not printable.");
	printf("\\n\n");
	printf("\n");
	printf("============================================= 07/ft_strupcase.c\n");
	printf("Original string \"%s\"", strupcase_test_str1);
	printf("\\n\n");
	ft_strupcase(strupcase_test_str1);
	printf("Uppercase string: \"%s\"", strupcase_test_str1);
	printf("\\n\n");
	printf("Original string \"%s\"", strupcase_test_str2);
	printf("\\n\n");
	ft_strupcase(strupcase_test_str2);
	printf("Uppercase string: \"%s\"", strupcase_test_str2);
	printf("\\n\n");
	printf("Original string \"%s\"", strupcase_test_str3);
	printf("\\n\n");
	ft_strupcase(strupcase_test_str3);
	printf("Uppercase string: \"%s\"", strupcase_test_str3);
	printf("\\n\n");
	printf("\n");
	printf("============================================ 08/ft_strlowcase.c\n");
	printf("Original string 1: \"%s\"", strlowcase_test1);
	printf("\\n\n");
	printf("After strlowcase: \"%s\"", ft_strlowcase(strlowcase_test1));
	printf("\\n\n");
	printf("Original string 2: \"%s\"", strlowcase_test2);
	printf("\\n\n");
	printf("After strlowcase: \"%s\"", ft_strlowcase(strlowcase_test2));
	printf("\\n\n");
	printf("Original string 3: \"%s\"", strlowcase_test3);
	printf("\\n\n");
	printf("After strlowcase: \"%s\"", ft_strlowcase(strlowcase_test3));
	printf("\\n\n");
	printf("\n");
	printf("========================================= 09/ft_strcapitalize.c\n");
	printf("Original string 1: \"%s\"", strcapitalize_str1);
	printf("\\n\n");
	ft_strcapitalize(strcapitalize_str1);
	printf("Capitalized string 1: \"%s\"", strcapitalize_str1);
	printf("\\n\n");
	printf("Original string 2: \"%s\"", strcapitalize_str2);
	printf("\\n\n");
	ft_strcapitalize(strcapitalize_str2);
	printf("Capitalized string 2: \"%s\"", strcapitalize_str2);
	printf("\\n\n");
	printf("Original string 3: \"%s\"", strcapitalize_str3);
	printf("\\n\n");
	ft_strcapitalize(strcapitalize_str3);
	printf("Capitalized string 3: \"%s\"", strcapitalize_str3);
	printf("\\n\n");
	printf("\n");
	// printf("=============================================== 10/ft_strlcpy.c\n");
	// printf("\\n\n");
	// printf("\n");
	// printf("================================= 11/ft_put_str_non_printable.c\n");
	// printf("\\n\n");
	// printf("\n");
	// printf("========================================== 12/ft_print_memory.c\n");
	// printf("\\n\n");
	return (0);
}
