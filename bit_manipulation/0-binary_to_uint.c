#include "main.h"



unsigned int binary_to_uint(const char *b)
{
	unsigned int nbDec, i, j, power;

	i = 0;
	while (b[i] != '\0')
	{
		i++;
	}
	power = 1;
	j = i - 1;
	nbDec = 0;
	while (b[j] != '\0')
	{
	  if (b[j] == '1')
	  {
		nbDec += power;
		power *= 2;
	  }
	  j--;
	}
			
	return (nbDec);
}	
