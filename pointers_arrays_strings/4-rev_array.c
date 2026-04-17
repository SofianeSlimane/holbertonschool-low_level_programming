#include "main.h"

/**
 * reverse_array - reverse an array of integer
 * @a: array of integer
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;
	for (i = 0; i < j; i++)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
		j--;
	}

}
