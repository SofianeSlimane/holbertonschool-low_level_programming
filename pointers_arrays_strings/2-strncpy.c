#include "main.h"
#include <stdio.h>


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
 * _strncpy - copy n bytes from src into dest
 * @dest: string to copy bytes into
 * @src: string to copy n bytes from
 * @n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len_dest, len_src;

	len_dest = _strlen(dest);
	len_src = _strlen(src);
	for (i = 0 ; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (len_src < len_dest)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
