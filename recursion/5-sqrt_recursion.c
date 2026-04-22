#include "main.h"


/**
 * sub_num_by_odd - substracts a number until it reaches 0
 * @n: integer
 * @m: odd number to substract by
 * Return: 0
 */
int sub_num_by_odd(int n, int m)
{
	if (n == 0)
		return (0);

	n -= m;

	return (sub_num_by_odd(n, m + 2) + 1);
}
/**
 * _sqrt_recursion - computes square root of n if natural number
 * @n: integer
 * Return: square root or -1 if not a natural number
 */
int _sqrt_recursion(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit == 2 || last_digit == 3 || last_digit == 7
								|| last_digit == 8 || n < 0)
		return (-1);

	return (sub_num_by_odd(n, 1));
}
