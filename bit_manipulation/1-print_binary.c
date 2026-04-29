#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 * print_binary - prints binary representation of an unsigned integer
 * @n: unsigned integer
 * Return: binary representation
 */




void print_binary(unsigned long int n)
{
	unsigned long int table;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == ULONG_MAX)
	{
		table = n;
	}
	else if (n < ULONG_MAX)
	{

		table = 1;
		while (table <= n)
		{
			if (table * 2 > ULONG_MAX - table * 2)
			{
				break;

			}
			table *= 2;
		}
	}
	table >>= 1;
	while (table > 0)
	{
		if (n >= table)
		{
			_putchar('1');
			n -= table;
		}
		else
		{
			_putchar('0');
		}
		table >>= 1;
	}
}




