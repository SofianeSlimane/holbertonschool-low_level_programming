#include "main.h"
/**
 * _strspn - returns length of substring
 * @s: string
 * @accept: characters to be found
 * Return: index of substring made of accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
for (i = 0; s[i] != *accept; i++)
{
}
return (i + 1);
}
