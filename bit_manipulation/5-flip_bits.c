#include "main.h"
#include <limits.h>

/**
 * get_bit - get bit at given index
 * @n: unsigned long int
 * @index: index
 * Return: 0, 1, or -1
 */


int get_bit_at_index(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1, result = 0;

	if (index > (sizeof(unsigned long int) * 8) - 1)
	{
		return (-1);
	}
	mask <<= index;
	result = n & mask;

	if (result > 0)
	return (1);

	return (0);
}
/**
 * flip_bits - returns number of bits needs to be flipped to get another number
 * @n: integer
 * @m: integer
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip_count = 0, largest_integer = 0;
	unsigned int digit_n = 0, digit_m = 0;
	int mov_left = 0;

	if (n > m)
		largest_integer = n;
	else if (m > n)
		largest_integer = m;
	else if (m == n)
		largest_integer = n;

	while (largest_integer > 1)
	{
		largest_integer >>= 1;
		mov_left++;
	}

	while (mov_left >= 0)
	{
		digit_n = get_bit_at_index(n, mov_left);
		digit_m = get_bit_at_index(m, mov_left);

		if (digit_n != digit_m)
		{
			flip_count++;
		}

		mov_left--;

	}
	return (flip_count);

}
