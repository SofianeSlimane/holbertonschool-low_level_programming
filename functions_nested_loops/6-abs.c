#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _abs(int r)
{
  r = -98;
  if (r < 0)
    {
      
      r = r * -1;
      printf("%d\n", r);
    }
  
  return (0);
}
