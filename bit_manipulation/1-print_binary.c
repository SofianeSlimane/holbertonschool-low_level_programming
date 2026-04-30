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
	unsigned long int p, cp;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	p = 1;
	cp = n;
	while (cp != 1)
	{
		cp >>= 1;
		p *= 2;
	}

	while (p > 0)
	{
		if (n >= p)
		{
			_putchar('1');
			n -= p;
		}
		else
		{
			_putchar('0');
		}
		p >>= 1;
	}
}
