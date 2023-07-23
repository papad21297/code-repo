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
