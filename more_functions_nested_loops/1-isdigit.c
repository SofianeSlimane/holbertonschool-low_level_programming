#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check the code
 * @c: digit or else
 *
 * Return: Always 0.
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}