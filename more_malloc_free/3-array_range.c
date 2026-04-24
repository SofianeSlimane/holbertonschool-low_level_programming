#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: miniumum
 * @max: maximum
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *p = NULL;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc((max + 1) * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;

	for (i = 0; i <= max; i++)
	{
		p[i] = i;
	}

	return (p);
}
