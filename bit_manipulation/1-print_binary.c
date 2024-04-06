#include "main.h"
#include <stdlib.h>





void print_binary(unsigned long int n)
{
	unsigned int table;


	if (n == 0)
	{
		_putchar('0');
		exit(0);
	}
	table = 1;
	while (table < n)
	{
		if ((table *= 2) > n)
		{
			break;
		}
		table *= 2;
	}

	while (n >= 0)
	{
		if (n == 0)
		{
			_putchar('0');
			break;
		}
		if (n > table)
		{
			_putchar('1');
		}
		else if (table > n)
		{
			_putchar('0');
		}
		n -= table;
	}
}




