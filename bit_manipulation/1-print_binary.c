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
	unsigned long int p = 1, l = 0, b = 0, mask = 1;

	while (p * 2 <= n)
	{
		p *= 2;
		l++;
	}
	while (1)
	{
		b = (mask << l) & n;
		if (b > 0)
			_putchar('1');
		else
			_putchar('0');

		if (l == 0)
			break;
		l--;
	}

}
