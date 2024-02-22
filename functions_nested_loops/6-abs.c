#include "main.h"
#include <stdio.h>

/**
 * _abs - change negative number to its absolute value.
 * @r: number chosen.
 *
 * Return: absolute value of r.
 */
int _abs(int r)
{
if (r < 0)
{
r = r * -1;
}
return (r);
}
