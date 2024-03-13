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
char *tab;
unsigned int i;
if (size == 0)
{
return (NULL);
}
tab = malloc(size * sizeof(char));
if (tab == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
tab[i] = c;
}
return (tab);
}
