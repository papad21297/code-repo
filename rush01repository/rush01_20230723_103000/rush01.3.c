/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papangao <papangao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 22:19:12 by papangao          #+#    #+#             */
/*   Updated: 2023/07/23 22:19:12 by papangao         ###   ########.fr       */
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

int	get_total_possibility_amount_array_permutation_amount(
		int *possibility_amount_array, int n)
{
	int	amount;
	int	i;

	amount = 1;
	i = 0;
	while (i < n)
	{
		amount *= possibility_amount_array[i];
		i++;
	}
	return (amount);
}

void	display_possibility_grouping(int *possibility_amount_array, int amount,
			int n, char *argv)
{
	int	integer_information_array[3];
	int	i;

	i = 0;
	while (i < amount)
	{
		integer_information_array[0] = amount;
		integer_information_array[1] = n;
		integer_information_array[2] = i;
		display_group_member(integer_information_array,
			possibility_amount_array, argv);
		printf("\n");
		i++;
	}
}

void	display_group_member(int integer_information_array[3],
			int *possibility_amount_array, char *argv)
{
	int	horizontal_condition_array[2];
	int	capacity;
	int	i;

	capacity = 1;
	i = 0;
	while (i < integer_information_array[1])
	{
		capacity *= possibility_amount_array[i];
		horizontal_condition_array[0] = argv[(
				4 * integer_information_array[1]) + (2 * i)] - 48;
		horizontal_condition_array[1] = argv[(
				6 * integer_information_array[1]) + (2 * i)] - 48;
		get_matching_arrangement_candidates(((integer_information_array[2] - (
						integer_information_array[2] % (
							integer_information_array[0] / capacity))) / (
					integer_information_array[0] / capacity))
			% possibility_amount_array[i],
			integer_information_array[1],
			horizontal_condition_array);
		i++;
	}
}

int	get_matching_arrangement_candidates(int _i, int n,
	int horizontal_condition_array[2])
{
	int	*val_arr;
	int	idx;
	int	i;

	val_arr = (int *)malloc(n * sizeof(int));
	idx = 0;
	i = 0;
	while (i < get_total_arrangement_amount(n))
	{
		display_arrangement_items(val_arr, i, n);
		if ((prmttion_mmber_itration(val_arr, n) == horizontal_condition_array[
					0]) && (bckwrd_prmttion_mmber_itration(val_arr, n)
				== horizontal_condition_array[1]))
		{
			if (idx == _i)
			{
				browse_int_array(val_arr, n);
			}
			idx++;
		}
		i++;
	}
	printf("\n");
}
