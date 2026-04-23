#include "main.h"
#include <stdio.h>
/**
 * divide - divide
 * @n: integer to divide
 * @d: dividor
 * Return: divided number
 */

int divide(int n, int d)
{
	if (d == 1)
		return (1);
	if (n % d == 0)
		return (0);

	return (divide(n, d - 1));
}


/**
 * is_prime_number - look for prime numbers
 * @n: number
 * Return: 1 if number is primer or otherwise 0
 */
int is_prime_number(int n)
{
	int indicator;

	if (n <= 1)
		return (0);

	indicator = divide(n, n - 1);

	if (indicator == 0)
		return (0);

	return (1);
}
