#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_last_digit(int r)
{
  
  if (r < 0)
    {
      r = r%10;
      return (r);
    }
  return(r);
  
}
