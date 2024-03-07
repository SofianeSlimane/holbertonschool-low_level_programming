#include "main.h"

/**
 * factorial - calcul factoriel
 *@n: number
 * Return: 0, 1, -1 or factorial of positive integer
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
