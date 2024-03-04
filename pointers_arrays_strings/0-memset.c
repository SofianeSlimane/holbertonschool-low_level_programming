#include "main.h"


/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to string
 * @b: character to be printed
 * @n: amount of times it will be printed
 * Return: return pointer to string
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
