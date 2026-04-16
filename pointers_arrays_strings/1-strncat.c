#include "main.h"


/**
 * _strlen - check the code
 *@s: chaine de caracteres
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'  ; i++)
{
}

return (i);
}
/**
 * _strncat - concatenate two strings using at most n bytes from src
 * @dest: first string
 * @src: second string
 * @n: number of bytes to read
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{

	int i;
	int len_dest;

	len_dest = _strlen(dest);
	for (i = 0 ; i < n && src[i] != '\0'; i++)
	{
		dest[len_dest] += src[i];
		len_dest++;
	}

	return (dest);
}
