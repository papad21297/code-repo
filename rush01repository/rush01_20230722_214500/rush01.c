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
	int i;

	i = 0;
	while (i < n)
	{
		printf("#%d %d => ???? <= %d\n", i + 1, argv[(4 * n) + (2 * i)] - 48,
			argv[(6 * n) + (2 * i)] - 48);
		printf("\n");
		i++;
	}
}