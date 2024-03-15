#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: miniumum
 * @max: maximum
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
  int *p = NULL;
  int i;
  if (min > max)
    {
      return (NULL);
    }
    
  p = malloc(min + max + 1);
  if (p == NULL)
    {
      return (NULL);
    }
  for (i = min; i <= max && p[i] != '\0' ; i++)
    {
      p[i] = min;
      min++;
    }
  
  return (p);
}
