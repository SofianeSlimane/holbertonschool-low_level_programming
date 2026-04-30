#include "main.h"
#include <limits.h>

/**
 * set_bit - set bit at given index
 * @n: integer
 * @index: index
 * Return: 1 or -1
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > (sizeof(unsigned long int) * 8) - 1)
	{
		return (-1);
	}
	*n |= mask;

	return (1);
}
