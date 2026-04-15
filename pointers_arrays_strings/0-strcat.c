#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenate two strings
 * @dest: first string
 * @src: second string to concatenate to dest
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{

	int i;
	int taille;

	for (taille = 0; dest[taille] != '\0'; taille++)
	{}
	for (i = 0 ; src[i] != '\0'; i++)
	{
		dest[taille] += src[i];
		taille++;
	}

	return (dest);
}
