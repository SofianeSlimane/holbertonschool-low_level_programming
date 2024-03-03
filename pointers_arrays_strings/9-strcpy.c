#include "main.h"
11;rgb:2b2b/2b2b/2b2b
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
