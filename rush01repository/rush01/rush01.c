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

#include <stdio.h>
#include <stdlib.h>

int		permutation_amount(int n);
void	permutation_iteration(int n, int formation_number);
void	index_to_placement_conversion(int *val_arr, int n, int i);
int		*fill_up_value_options(int n);
void	remove_and_shift(int arr[], int size, int index_to_remove);
void	prmttion_mmber_itration(int arr[], int size);

int	main(void)
{
	int	n;

	n = 4;
	permutation_iteration(n, permutation_amount(n));
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

void	permutation_iteration(int n, int formation_number)
{
	int	*val_arr;
	int	i;

	val_arr = (int *)malloc(n * sizeof(int));
	i = 0;
	while (i < formation_number)
	{
		index_to_placement_conversion(val_arr, n, i);
		prmttion_mmber_itration(val_arr, n);
		printf("[%d]\n", i);
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
		printf(">>> %d", val_options_arr[(i - (i % capacity)) / capacity]);
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

void prmttion_mmber_itration(int arr[], int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d, ", arr[i]);
		i++;
	}
}