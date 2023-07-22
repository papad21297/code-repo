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

*/

int main(void)
{
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

	return 0;
}
