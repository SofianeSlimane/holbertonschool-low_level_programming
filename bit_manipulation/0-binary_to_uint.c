#include "main.h"



unsigned int binary_to_uint(const char *b)
{
	unsigned int nbDec, i, j, k, power, two;

	i = 0;
	while (b[i] != '\0')
	{
		i++;
	}
	power = i;
	j = 0;
	k = 0;
	two = 1;
	while (b[j] != '\0')
	{
		if (b[j] == '1' && power == 1 && b[j++] == '\0')
		{
			nbDec += 1;
			break;
		}
		if (b[j] == '1')
		{ 
			k = 0;
			while (power > k)
			{
		
	}
	return (nbDec);
}	
