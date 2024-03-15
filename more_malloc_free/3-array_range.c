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
  i = 0;
  while (min <= max && p[i] != '\0')
    {
      p[i] = p[min];
      min++;
      i++;
    }
  
  return (p);
}
