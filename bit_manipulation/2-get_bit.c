#include "main.h"





int get_bit(unsigned long int n, unsigned int index)
{
     char *binary;
     unsigned long int table;
     unsigned int i, j, k;
     
     binary = "";     
     if (n == 0)
     {
     	binary += '0';
     }
     table = 1;
     while (table <= n)
     {
	     table *= 2;
     }
     table >>= 1;
     while (table > 0)
     {
	     if (n >= table)
	     {
		     binary += '1';
		     n -= table;
             }
	     else if (table > n)
             {
		     binary += '0';
             }
	     table >>= 1;
     }
	i = 0;
	while (binary[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	while (binary[j] != '\0')
	{
		if (k == index)
		{
			break;
		}
		j--;
		k++;
	}
	return (binary[j] = '0');
}
