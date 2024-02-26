#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code.
 * @c: value that need to be checked to know if it's upper case
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
