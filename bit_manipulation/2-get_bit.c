#include "main.h"
#include <stdlib.h>




int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 0, len = 0, p = 1, cp = n;
	char bit = ' ';
	char *binary_string;

	p = 1;
	cp = n;
	while (cp != 1)
	{
		cp >>= 1;
		p *= 2;
		len++;
	}
	if (index > len)
	{
		return (-1);
	}
	binary_string = malloc((sizeof(char) * len) + 2);
	if (binary_string == NULL)
	{
		return (-1);
	}
	while (p > 0)
	{
		if (n >= p)
		{
			binary_string[i] = '1';
			n -= p;
		}
		else
		{
			binary_string[i] = '0';
		}
		p >>= 1;
		i++;
	}
	binary_string[i] = '\0';
	bit = binary_string[len - index];
	free(binary_string);
	return (bit - '0');
}
