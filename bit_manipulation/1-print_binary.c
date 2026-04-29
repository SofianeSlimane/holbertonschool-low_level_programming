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
	unsigned long int t, overflows_ulongmax;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	overflows_ulongmax = 0;
	t = 1;
	while (t <= n)
	{
		if (t * 2 >= ULONG_MAX - t * 2)
		{
			t *= 2;
			overflows_ulongmax = 1;
			break;
		}
		t *= 2;
	}
	if (!overflows_ulongmax)
	{
		t >>= 1;
	}

	while (t > 0)
	{
		if (n >= t)
		{
			_putchar('1');
			n -= t;
		}
		else
		{
			_putchar('0');
		}
		t >>= 1;
	}
}
