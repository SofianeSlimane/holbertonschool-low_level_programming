#include "main.h"

/**
 * _isalpha - check for lower case or upper case
 *@r: value chosen
 *
 * Return: either 1 or 0
 */
int _isalpha(int r)
{ 
if ((r >= 'a' && r <= 'z') ||( r >= 'A' && r <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
