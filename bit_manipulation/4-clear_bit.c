#include "main.h"


/**
 * clear_bit - set a bit to 0 at given index
 * @n: pointer to positive integer
 * @index: positive index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index, xor = 0;

	if (index > (sizeof(unsigned long int) * 8) - 1)
	{
		return (-1);
	}

	xor = *n ^ mask;

	if (*n > xor)
	{
		*n ^=  mask;
		return (1);
	}

	return (1);
}
