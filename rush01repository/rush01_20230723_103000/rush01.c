#include <stdlib.h>
#include <stdio.h>

/*
cd ~/Desktop/cpiscine/piscine_repository_folders_collection/july-piscine/rush01repository
~/.local/bin/norminette ~/Desktop/cpiscine/piscine_repository_folders_collection/july-piscine/rush01repository/rush01_20230723_103000/*.c
bash compile.sh
*/

void	solve_puzzle(int n, char *argv);
void	get_horizontal_condition_array(int _i,
			int horizontal_condition_array[2], char *argv);
void	get_arrangement_candidates_amount(int n,
			int horizontal_condition_array[2]);
int		get_total_arrangement_amount(int n);
void	display_arrangement_items(int *val_arr, int _i, int n);
int		*fill_up_value_options(int n);
void	remove_and_shift(int arr[], int size, int index_to_remove);
void	browse_int_array(int arr[], int n);
int		prmttion_mmber_itration(int arr[], int size);
int		bckwrd_prmttion_mmber_itration(int arr[], int size);

int main(int argc, char *argv[])
{
	int	n;

	n = 4;
	if (argc == 2)
	{
		solve_puzzle(n, argv[1]);
	}
	return (0);
}

void solve_puzzle(int n, char *argv)
{
	int horizontal_condition_array[2];
	int i;

	i = 0;
	while (i < n)
	{
		get_horizontal_condition_array(i, horizontal_condition_array, argv);
		printf("%d => X X X X <= %d\n", horizontal_condition_array[0], horizontal_condition_array[1]);
		get_arrangement_candidates_amount(n, horizontal_condition_array);
		printf("\n");
		i++;
	}
}

void get_horizontal_condition_array(int _i,
			int horizontal_condition_array[2], char *argv)
{
	int i;

	i = 0;
	while (i < 2)
	{
		horizontal_condition_array[i] = argv[(8 * (2 + i)) + (2 * _i)] - 48;
		i++;
	}
}

void get_arrangement_candidates_amount(int n,
	int horizontal_condition_array[2])
{
	int amount;
	int	*val_arr;
	int i;

	amount = 0;
	val_arr = (int *)malloc(n * sizeof(int));
	i = 0;
	while (i < get_total_arrangement_amount(n))
	{
		display_arrangement_items(val_arr, i, n);
		if ((prmttion_mmber_itration(val_arr, n) == horizontal_condition_array[
			0]) && (bckwrd_prmttion_mmber_itration(val_arr, n) ==
			horizontal_condition_array[1]))
		{
			amount++;
			printf("- #%d - ", i);
			browse_int_array(val_arr, n);
			printf("\n");
		}
		i++;
	}
	printf("================ %d candidate(s) found\n", amount);
}

int get_total_arrangement_amount(int n)
{
	int amount;
	int i;

	amount = 1;
	i = 0;
	while (i < n)
	{
		amount *= (n - i);
		i++;
	}
	return (amount);
}

void display_arrangement_items(int *val_arr, int _i, int n)
{
	int	*val_options_arr;
	int capacity = get_total_arrangement_amount(n);
	int i;

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
