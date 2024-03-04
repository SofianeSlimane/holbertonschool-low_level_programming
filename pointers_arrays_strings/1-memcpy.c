#include "main.h"

/**
 * _memcpy - copy from src to dest
 * @dest: destinaion string
 * @src:source string
 * @n: numbers of characters to be printed
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
