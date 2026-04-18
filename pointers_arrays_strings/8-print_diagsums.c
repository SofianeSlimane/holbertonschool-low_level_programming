#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: pointer to [0][0]
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;
	int *ptr;

	ptr = a + size - 1;
	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += *a;
		sum2 += *ptr;
		a += size + 1;
		ptr += size - 1;
	}

	printf("%d, ", sum1);
	printf("%d\n", sum2);

}
