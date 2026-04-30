#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * get_bit - get bit at given index
 * @n: unsigned long int
 * @index: index
 * Return: 0, 1, or -1
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index, result = 0;

	if (index > (sizeof(unsigned long int) * 8) - 1)
	{
		return (-1);
	}
	result = n & mask;

	if (result > 0)
		return (1);

	return (0);
}
