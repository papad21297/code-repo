#include <stdio.h>
#include <stdlib.h>

/*
1 => ???? <= 4
     4321

4 => ???? <= 1
     1234

1 => ???? <= 2
     4123
     4213

2 => ???? <= 1
     3124
     3214

2 => ???? <= 3
     1432
     3421

1 => ???? <= 3
     4132
     4231
     4312

3 => ???? <= 1
     1324
     2134
     2314

3 => ???? <= 2
     1243
     1342
     2341

2 => ???? <= 2
     1423
     2143
     2413
     3142
     3241
     3412

	int r = 8, c = 10;
	int* ptr = malloc((r * c) * sizeof(int));
	for (int i = 0; i < r * c; i++)
		ptr[i] = i + 1;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++)
			printf("%d ", ptr[i * c + j]);
		printf("\n");
	}
	free(ptr);
*/

void	itrate_lft_to_rght_lne(int n, char *argv);
void	filter_candidates(int i, int *ptr_canddte_amount);
void	collect_candidates(int candidate_amount, int i, int **ptr_arr_arr);

int main(int argc, char *argv[])
{
	int n;

	n = 4;
	if ((argc - 1) == 1)
		itrate_lft_to_rght_lne(n, argv[0 + 1]);
	return 0;
}

void	itrate_lft_to_rght_lne(int n, char *argv)
{
	int *arr_arr_size;
	int candidate_amount;
	int	*arr_arr;
	int candidates_collected;
	// int **ptr_arr_arr;
	int i;

	arr_arr_size = (int *)malloc(n * sizeof(int));
	candidates_collected = 0;
	i = 0;
	while (i < n)
	{
		filter_candidates(i, &candidate_amount);
		arr_arr = (int *)malloc(candidate_amount * sizeof(int));
		// ptr_arr_arr = &arr_arr;
		collect_candidates(candidates_collected, i, &arr_arr);
		candidates_collected += candidate_amount;
		arr_arr_size[i] = candidate_amount;
		printf("#%d %d => ???? <= %d\n", i, argv[(4 * n) + (2 * i)] - 48,
			argv[(6 * n) + (2 * i)] - 48);
		printf("%d candidate(s) found\n\n", candidate_amount);
		i++;
	}
	printf("arr_arr_size's members:\n");
	i = 0;
	while (i < n)
	{
		printf("- %d\n", arr_arr_size[i]);
		i++;
	}
}

void	filter_candidates(int i, int *ptr_canddte_amount)
{
	// int _i;
	int candidacy_volume[4] = { 3, 5, 2, 7 };
	// int candidacy_array[17] = { 3, 9, 27, 5, 25, 125, 625, 3125, 2, 4, 7, 49,
	// 	343, 2401, 16807, 117649, 823543 };
	// _i = 0;
	// while (_i < 17)
	// {
	// 	if (candidacy_array[_i] % candidacy_volume[i] == 0)
	// 		printf("%d\n", candidacy_array[_i]);
	// 	_i++;
	// }
	*ptr_canddte_amount = candidacy_volume[i];
}

void	collect_candidates(int candidate_amount, int i, int **ptr_arr_arr)
{
	int _i;
	int matching_found;
	int candidacy_volume[4] = { 3, 5, 2, 7 };
	int candidacy_array[17] = { 3, 9, 27, 5, 25, 125, 625, 3125, 2, 4, 7, 49,
		343, 2401, 16807, 117649, 823543 };
	_i = 0;
	matching_found = 0;
	while (_i < 17)
	{
		if (candidacy_array[_i] % candidacy_volume[i] == 0)
		{
			printf("candidacy_array[%d]: \"%d\"\n", candidate_amount + matching_found,
				candidacy_array[_i]);
			matching_found++;
		}
		_i++;
	}
}
