/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papangao <papangao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 21:29:34 by papangao          #+#    #+#             */
/*   Updated: 2023/07/21 21:29:34 by papangao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 4321
412341
323412
234122
141232
 1222
*/

#include <stdio.h>
#include <stdlib.h>

int		permutation_amount(int n);
void	permutation_iteration(int n, int formation_number, int lft, int rght);
void	index_to_placement_conversion(int *val_arr, int n, int i);
int		*fill_up_value_options(int n);
void	remove_and_shift(int arr[], int size, int index_to_remove);
void	prmttion_mmber_itration(int arr[], int size);
void	bckwrd_prmttion_mmber_itration(int arr[], int size);
// char	**split_string_by_space(const char *input);
int		count_word_in_string(const char *input);
int		lnstr(const char *input);

int	main(int argc, char *argv[])
{
	/*
	permutation_iteration(n, permutation_amount(n));
	*/
	int	n;
	int i;

	n = 4;
	if ((argc - 1) == 1)
		printf("%s\n", argv[1]);
		while (i < n)
		{
			printf("%c => ... <= %c\n", argv[1][((n * 2) + i) * 2],
				argv[1][((n * 3) + i) * 2]);
			permutation_iteration(n, permutation_amount(n),
				argv[1][((n * 2) + i) * 2], argv[1][((n * 3) + i) * 2]);
			printf("\n");
			i++;
		}
}

int	permutation_amount(int n)
{
	int	amount;
	int	i;

	amount = 1;
	i = 0;
	while (i < n)
	{
		amount *= n - i;
		i++;
	}
	return (amount);
}

void	permutation_iteration(int n, int formation_number, int lft, int rght)
{
	int	*val_arr;
	int	i;

	val_arr = (int *)malloc(n * sizeof(int));
	i = 0;
	while (i < formation_number)
	{
		index_to_placement_conversion(val_arr, n, i);
		prmttion_mmber_itration(val_arr, n);
		bckwrd_prmttion_mmber_itration(val_arr, n);
		printf("\n");
		i++;
	}
}

void	index_to_placement_conversion(int *val_arr, int n, int i)
{
	int	function_i;
	int	capacity;
	int	*val_options_arr;

	val_options_arr = fill_up_value_options(n);
	capacity = permutation_amount(n);
	function_i = 0;
	while (function_i < n)
	{
		capacity /= n - function_i;
		val_arr[function_i] = val_options_arr[(i - (i % capacity)) / capacity];
		remove_and_shift(val_options_arr, n, (i - (i % capacity)) / capacity);
		i %= capacity;
		function_i++;
	}
}

int	*fill_up_value_options(int n)
{
	int	*arr;
	int	i;

	i = 0;
	arr = (int *)malloc(n * sizeof(int));
	while (i < n)
	{
		arr[i] = i + 1;
		i++;
	}
	return (arr);
}

void	remove_and_shift(int arr[], int size, int index_to_remove)
{
	int	i;

	i = index_to_remove;
	while (i < (size - 1))
	{
		arr[i] = arr[i + 1];
		i++;
	}
	size--;
}

void	prmttion_mmber_itration(int arr[], int size)
{
	int	tallst_mmbr;
	int	tallst_found;
	int	i;

	tallst_mmbr = 0;
	tallst_found = 0;
	i = 0;
	while (i < size)
	{
		if (arr[i] > tallst_mmbr)
		{
			tallst_mmbr = arr[i];
			tallst_found++;
		}
		printf("%d", arr[i]);
		i++;
	}
	// printf(" %d => ...", tallst_found);
}

void	bckwrd_prmttion_mmber_itration(int arr[], int size)
{
	int	tallst_mmbr;
	int	tallst_found;
	int	i;

	tallst_mmbr = 0;
	tallst_found = 0;
	i = 0;
	while (i < size)
	{
		if (arr[size - (i + 1)] > tallst_mmbr)
		{
			tallst_mmbr = arr[size - (i + 1)];
			tallst_found++;
		}
		i++;
	}
	// printf(" <= %d", tallst_found);
}


// char	**split_string_by_space(const char *input)
// {
// 	char	**warr;
// 	int 	word_start;
// 	int		wdidx;
// 	int		i;
// 	int		word_len;
	
// 	warr = (char **)malloc(count_word_in_string(input) * sizeof(char *));
// 	word_start = 0;
// 	wdidx = 0;
// 	i = 0;
// 	while (i < lnstr(input))
// 	{
// 		if (input[i] == ' ' || input[i] == '\0')
// 		{
// 			int wordLen = i - word_start;
// 			warr[wdidx] = (char *)malloc((lnstr(input) + 1) * sizeof(char));
// 		}
// 		i++;
// 	}
// }

int count_word_in_string(const char *input)
{
	int str_len;
	int word_count;
	
	str_len = 0;
	word_count = 1;
	while (input[str_len] != '\0')
	{
		if (input[str_len] == ' ')
			word_count++;
		str_len++;
	}
	return (word_count);
}

int lnstr(const char *input)
{
	int str_len;
	
	str_len = 0;
	while (input[str_len] != '\0')
	{
		str_len++;
	}
	return (str_len);
}