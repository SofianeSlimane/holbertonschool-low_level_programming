#include "main.h"
#include <stdlib.h>

/**
 * create_array - create and array made of a specific character
 * @c: character to be added to each places of array
 * @size: defines size of the array
 * Return: a pointer to the newly created arrey
 */


char *create_array(unsigned int size, char c)
{
char *tab = NULL;
unsigned int i;
if (size == 0)
{
return (NULL);
}
tab = malloc(size * sizeof(char));
for (i = 0; i < size; i++)
{
tab[i] = c;
}
if (tab == NULL)
{
return (NULL);
}
return (tab);
free(tab);
}
