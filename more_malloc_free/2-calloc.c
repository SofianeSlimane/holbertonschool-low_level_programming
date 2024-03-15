#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memeory for an array
 * @nmemb: number of elements
 * @size: size of each elements
 * Return: pointer to allocated memory
 */



void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int *p;
unsigned int i;
if (nmemb == 0)
{
return (NULL);
}
if (size == 0)
{
return (NULL);
}
p = malloc(nmemb * sizeof(size));
if (p == NULL)
{
return (NULL);
}
for (i = 0; p[i] < nmemb ; i++)
{
p[i] = 0;
}
return (p);
}
