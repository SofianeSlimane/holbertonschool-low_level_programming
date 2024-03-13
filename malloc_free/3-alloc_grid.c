#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2d dimensional array of integers
 * @width: largeur
 * @height: hauteur
 * Return: pointer
 */



int **alloc_grid(int width, int height)
{
int i, k, l;
int **ptp = NULL;
if (width <= 0 || height <= 0)
{
return (NULL);
}
ptp = malloc(height * sizeof(int *));
if (ptp == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
ptp[i] = malloc(width * sizeof(int));
if (ptp[i] == NULL)
{
free(ptp[i]);
return (NULL);
}
}
for (k = 0; k < height; k++)
{
for (l = 0; k < l; l++)
{
ptp[k][l] = 0;
}
}
return (ptp);
}
