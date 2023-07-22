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
*/

#include <stdio.h>
#include <stdlib.h>

int		permutation_amount(int n);
int		**permutation_iteration(int n, int formation_number, int lft, int rght,
	int	*ptr_amount);
void	index_to_placement_conversion(int *val_arr, int n, int i);
int		*fill_up_value_options(int n);
void	remove_and_shift(int arr[], int size, int index_to_remove);
int		prmttion_mmber_itration(int arr[], int size);
int		bckwrd_prmttion_mmber_itration(int arr[], int size);
int		count_word_in_string(const char *input);
int		lnstr(const char *input);
void	browse_int_array(int arr[], int n);

int	main(int argc, char *argv[])
{
	int	amount;
	int	*ptr_amount;
	int	n;
	int	i;

	ptr_amount = &amount;
	n = 4;
	if ((argc - 1) == 1)
	{
		printf("%s\n", argv[1]);
		while (i < n)
		{
			printf("%c => ... <= %c\n", argv[1][((n * 2) + i) * 2],
				argv[1][((n * 3) + i) * 2]);
			permutation_iteration(n, permutation_amount(n), argv[1][((n * 2)
					+ i) * 2] - 48, argv[1][((n * 3) + i) * 2] - 48,
					ptr_amount);
			printf("[%d]\n", amount)
			printf("\n");
			i++;
		}
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

int	**permutation_iteration(int n, int formation_number, int lft, int rght,
	int	*ptr_amount)
{
	int	**matrix;
	int	amount;
	int	*val_arr;
	int	i;

	matrix = (int **)malloc(formation_number * sizeof(int *));
	amount = 0;
	val_arr = (int *)malloc(n * sizeof(int));
	i = 0;
	while (i < formation_number)
	{
		index_to_placement_conversion(val_arr, n, i);
		matrix[i] = val_arr;
		if ((lft == prmttion_mmber_itration(val_arr, n)) && (rght
				== bckwrd_prmttion_mmber_itration(val_arr, n)))
		{
			amount++;
			// printf("- ");
			// browse_int_array(val_arr, n);
			// printf("\n");
		}
		i++;
	}
	*ptr_amount = amount;
	// printf("%d\n", amount);
	return (matrix);
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

int	prmttion_mmber_itration(int arr[], int size)
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
		i++;
	}
	return (tallst_found);
}

int	bckwrd_prmttion_mmber_itration(int arr[], int size)
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
	return (tallst_found);
}

int	count_word_in_string(const char *input)
{
	int	str_len;
	int	word_count;

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

int	lnstr(const char *input)
{
	int	str_len;

	str_len = 0;
	while (input[str_len] != '\0')
	{
		str_len++;
	}
	return (str_len);
}

void	browse_int_array(int arr[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf("%d", arr[i]);
		i++;
	}
}
