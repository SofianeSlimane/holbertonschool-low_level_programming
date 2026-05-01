#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary number in string format
 * Return: converted number
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, mask = 1, bit = 0;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{}

	len--;
	while (len >= 0)
	{
		bit = (b[len] - 48);

		if (bit == 1)
			sum += mask;
		else if (bit != 0)
			return (0);

		mask <<= 1;
		len--;
	}

	return (sum);
}
