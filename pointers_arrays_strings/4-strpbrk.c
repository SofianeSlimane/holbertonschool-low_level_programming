#include "main.h"

/**
 * _strpbrk - search a string for mathing characters
 * @s: pointer to string
 * @accept: pointer to string containing characters to match
 * Return: pointer to the characters that matches
 */

char  *_strpbrk(char *s, char *accept)
{
int i;
int j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; i >= j; j++)
{
if (accept[i] == s[i])
{
s += i - 1;
return (s);
}
}
}
return ('\0');
}
