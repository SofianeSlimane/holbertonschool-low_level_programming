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
	unsigned long int table, overflows_ulongmax;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	overflows_ulongmax = 0;
	table = 1;
	while (table <= n)
	{
		if (table * 2 >= ULONG_MAX - table * 2)
		{
			overflows_ulongmax = 1;
			break;

		}
		table *= 2;
	}
	if (!overflows_ulongmax)
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




