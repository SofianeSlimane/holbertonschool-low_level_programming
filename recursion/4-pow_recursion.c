#include "main.h"

/**
 * _pow_recursion - raise x to the power of y
 * @x: number to be raised
 * @y: number that x needs to be raised to
 * Return: value of x
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else if (y > 0)
{
x *= _pow_recursion(x, y - 1);
}
return (x);
}
