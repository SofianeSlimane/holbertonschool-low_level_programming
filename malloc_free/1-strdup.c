#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy a string taken as a parameter and return it
 * @str: pointer to string to be copied
 * Return: pointer to string containing copy of given string
 */

char *_strdup(char *str)
{
int i;
char *str2;
int j;
if (str == NULL)
{
return (NULL);
}
for (j = 0; str[j] != '\0'; j++)
{
}
str2 = malloc(sizeof(char) * j + 1);
if (str2 == NULL)
{
return (NULL);
}
for (i = 0; i <= j; i++)
{
str2[i] = str[i];
}
return (str2);
free(str2);
}
