/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papangao <papangao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:26:29 by papangao          #+#    #+#             */
/*   Updated: 2023/07/23 22:18:23 by papangao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*
cd ~/Desktop/cpiscine/piscine_repository_folders_collection/july-piscine
	/rush01repository
~/.local/bin/norminette ~/Desktop/cpiscine/piscine_repository_folders_collection
	/july-piscine/rush01repository/rush01_20230723_103000/*.c
bash compile.sh
*/

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

int	main(int argc, char *argv[])
{
	int	n;

	n = 4;
	if (argc == 2)
	{
		solve_puzzle(n, argv[1]);
	}
	return (0);
}

void	solve_puzzle(int n, char *argv)
{
	int	*possibility_amount_array;
	int	horizontal_condition_array[2];
	int	i;

	possibility_amount_array = (int *)malloc(n * sizeof(int));
	i = 0;
	while (i < n)
	{
		get_horizontal_condition_array(i, horizontal_condition_array, argv);
		possibility_amount_array[i] = get_arrangement_candidates_amount(
				n, horizontal_condition_array);
		i++;
	}
	display_possibility_grouping(possibility_amount_array,
		get_total_possibility_amount_array_permutation_amount(
			possibility_amount_array, n), n, argv);
}

void	get_horizontal_condition_array(int _i,
			int horizontal_condition_array[2], char *argv)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		horizontal_condition_array[i] = argv[(8 * (2 + i)) + (2 * _i)] - 48;
		i++;
	}
}

int	get_arrangement_candidates_amount(int n,
	int horizontal_condition_array[2])
{
	int	amount;
	int	*val_arr;
	int	i;

	amount = 0;
	val_arr = (int *)malloc(n * sizeof(int));
	i = 0;
	while (i < get_total_arrangement_amount(n))
	{
		display_arrangement_items(val_arr, i, n);
		if ((prmttion_mmber_itration(val_arr, n) == horizontal_condition_array[
					0]) && (bckwrd_prmttion_mmber_itration(val_arr, n)
				== horizontal_condition_array[1]))
		{
			amount++;
		}
		i++;
	}
	return (amount);
}

int	get_total_arrangement_amount(int n)
{
	int	amount;
	int	i;

	amount = 1;
	i = 0;
	while (i < n)
	{
		amount *= (n - i);
		i++;
	}
	return (amount);
}
