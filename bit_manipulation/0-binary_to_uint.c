#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary number in string format
 * Return: converted number
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int nbDec, power;
	int i, j;

	if (b == NULL)
	{
		return (0);
	}
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}
	power = 1;
	j = i - 1;
	nbDec = 0;

	while (j >= 0)
	{
	if (b[j] == '1')
	{
		nbDec += power;
	}
	  power *= 2;
	  j--;
	}

	return (nbDec);
}
