#include "main.h"
/**
 * is_prime_number - look for prime numbers
 * @n: number
 * Return: 1 if number is primer or otherwise 0
 */



int is_prime_number(int n)
{
if (n > 1 && n % n == 0 && n % 1 == 0 && n % 2 != 0 && n % 5 != 0)
{
return (1);
is_prime_number(n);
}
return (0);
}
