/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papangao <papangao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 22:18:32 by papangao          #+#    #+#             */
/*   Updated: 2023/07/23 22:18:32 by papangao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	solve_puzzle(int n, char *argv);
void	get_horizontal_condition_array(int _i,
			int horizontal_condition_array[2], char *argv);
int		get_arrangement_candidates_amount(int n,
			int horizontal_condition_array[2]);
int		get_total_arrangement_amount(int n);
void	display_arrangement_items(int *val_arr, int _i, int n);
int		*fill_up_value_options(int n);
void	remove_and_shift(int arr[], int size, int index_to_remove);
void	browse_int_array(int arr[], int n);
int		prmttion_mmber_itration(int arr[], int size);
int		bckwrd_prmttion_mmber_itration(int arr[], int size);
int		get_total_possibility_amount_array_permutation_amount(
			int *possibility_amount_array, int n);
void	display_possibility_grouping(int *possibility_amount_array, int amount,
			int n, char *argv);
void	display_group_member(int integer_information_array[3],
			int *possibility_amount_array, char *argv);
int		get_matching_arrangement_candidates(int _i, int n,
			int horizontal_condition_array[2]);

void	display_arrangement_items(int *val_arr, int _i, int n)
{
	int	*val_options_arr;
	int	capacity;
	int	i;

	capacity = get_total_arrangement_amount(n);
	val_options_arr = fill_up_value_options(n);
	i = 0;
	while (i < n)
	{
		capacity /= (n - i);
		val_arr[i] = val_options_arr[(_i - (_i % capacity)) / capacity];
		remove_and_shift(val_options_arr, n, (_i - (_i % capacity)) / capacity);
		_i %= capacity;
		i++;
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
