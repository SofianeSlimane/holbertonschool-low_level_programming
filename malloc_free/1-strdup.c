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
 for (j = 0; str[j] != '\0'; j++)
   {
   }
str2 = malloc(j * sizeof(char));
 if (str2 == NULL)
   
   {
     return (NULL);
   }
 else
   {
 for (i = 0; i <= j - 1; i++)
{
str2[i] = str[i];
}
   }

return (str2);
free(str2);
}
