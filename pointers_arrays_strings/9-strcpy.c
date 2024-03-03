#include "main.h"

/**
 * _strcpy - copy string
 * @dest: destination
 * @src: source
 *
 * Return: valeur pointee par dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
int taille;
for (taille = 0; src[taille] != '\0'; taille++)
{
}
for (i = 0; i <= taille; i++)
{
dest[i] = src[i];
}
return (dest);
}
