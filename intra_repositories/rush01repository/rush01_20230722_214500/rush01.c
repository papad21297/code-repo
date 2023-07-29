#include <stdio.h>
#include <stdlib.h>

/*

1234 4 1
1243 3 2

4 => ???? <= 11234 4 1
     1234  1

3 => ???? <= 2
     1243 1,2,3
     1342
     2341

2 => ???? <= 2
     1423 1,2,3,4,5,6
     2143
     2413
     3142
     3241
     3412
1 => ???? <= 2
     4123 1,2
     4213

1*3*6*2

01 1111
02 1112
03 1121
04 1122
05 1131
06 1132
07 1141
08 1142
09 1151
10 1152
11 1161
12 1162
13 1211
14 1212
15 1221
16 1222
17 1231
18 1232
19 1241
20 1242
21 1251
22 1252
23 1261
24 1262
25 1311
26 1312
27 1321
28 1322
29 1331
30 1332
31 1341
32 1342
33 1351
34 1352
35 1361
36 1362

1,1,1,1
1,1,1,2
1,1,2,1
1,1,2,2


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
int		*collect_candidates(int candidate_amount, int i, int *ptr_arr_arr);

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
	int j;

	arr_arr = NULL;
	arr_arr_size = (int *)malloc(n * sizeof(int));
	candidates_collected = 0;
	i = 0;
	while (i < n)
	{
		filter_candidates(i, &candidate_amount);
		// arr_arr = (int *)malloc(candidate_amount * sizeof(int));
		// ptr_arr_arr = &arr_arr;
		// arr_arr = collect_candidates(candidates_collected, i, arr_arr);
		j = 0;
		while (j < candidate_amount)
		{
			printf("%d_%d, ", candidates_collected, j);
			arr_arr = collect_candidates(candidates_collected + j, i, arr_arr);
			j++;
		}
		printf("\n");
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
	printf("\narr_arr's members: x%d\n", candidates_collected);
	i = 0;
	while (i < candidates_collected)
	{
		printf("- #%d: %d\n", i, arr_arr[i]);
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

int	*collect_candidates(int candidate_amount, int i, int *ptr_arr_arr)
{
	int	*new_arr_arr;
	int	_i;
	int	candidacy_volume[4] = { 3, 5, 2, 7 };
	int	candidacy_array[17] = { 3, 9, 27, 5, 25, 125, 625, 3125, 2, 4, 7, 49,
		343, 2401, 16807, 117649, 823543 };
	
	new_arr_arr = (int *)malloc((candidate_amount + 1) * sizeof(int));
	_i = 0;
	while (_i < candidate_amount)
	{
		new_arr_arr[_i] = candidacy_array[_i];
		// new_arr_arr[_i] = ptr_arr_arr[_i];
		_i++;
	}
	_i = 0;
	while (_i < 17)
	{
		if (candidacy_array[_i] % candidacy_volume[i] == 0)
		{
			// new_arr_arr[candidate_amount + matching_found] = candidacy_array[_i];
			if (_i == candidate_amount)
			{
				new_arr_arr[_i] = candidacy_array[_i];
				printf("candidacy_array[%d]: \"%d\"\n", candidate_amount,
					candidacy_array[_i]);
			}
		}
		_i++;
	}
	return (new_arr_arr);
}
