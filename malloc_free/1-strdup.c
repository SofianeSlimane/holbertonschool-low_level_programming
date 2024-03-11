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
if (str == NULL)
{
return (NULL);
}
str2 = malloc(sizeof(str));
for (i = 0; str[i] != '\0'; i++)
{
str2[i] += str[i];
}
if (str2 == NULL)
{
return (NULL);
}
return (str2);
free(str2);
}
