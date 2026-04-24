#include "main.h"
#include <stdlib.h>

/**
 * get_bytes_num - get the number of bytes to allocate
 * @min: range 1
 * @max: range 2
 * Return: integer
 */
unsigned int get_bytes_num(int min, int max)
{
	unsigned int result;

	result = 0;
	if (min >= 0 && max >= 0)
	{
		result = (max - min) + 1;
	}
	else if (min < 0 && max < 0)
		result = (max - min) * (-1);
	else if (min < 0 && max > 0)
		result = (min * (-1)) + max + 1;
	return (result * sizeof(int));
}
/**
 * array_range - creates an array of integers
 * @min: miniumum
 * @max: maximum
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *p = NULL;
	int i, j;
	unsigned int bytes;

	if (min > max)
	{
		return (NULL);
	}

	bytes = get_bytes_num(min, max);
	p = malloc(bytes);

	if (p == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = min; i <= max; i++)
	{
		p[j] = i;
		j++;
	}

	return (p);
}
