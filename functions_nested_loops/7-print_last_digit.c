#include "main.h"

/**
 * print_last_digit - check the code
 * @r: value
 *
 * Return: Always 0.
 */
int print_last_digit(int r)
{
if (r >= 0)
{
r = r % 10;
_putchar('0' + r);
}
else if (r < 0)
{
r = r % 10 * (-1);
_putchar('0' + r);
}
return (r);
}