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
  if (min == max)
    {
      p = malloc(sizeof(int));
      
    }
  p = malloc((min + max + 1) * sizeof(int));
  if (p == NULL)
    {
      return (NULL);
    }
  if (min == max)
    { i = 0;
      while (p[i] != max)
      p[i] = min;
      i++;
    }
	
  else if (min < max)
    {
      i = 0;
  while (min < max)
    {
   
  
      p[i] = min;
      min++;
      i++;
    }
    } 
  return (p);
}
