#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>



int sum_them_all(const unsigned int n, ...)
{
  unsigned int i;
  va_list args;
  int somme = 0;
  
  va_start(args, n);

  if (n == 0)
    {
      return (0);
    }

  for (i = 0; i < n; i++)
    {
      somme += va_arg(args, int);
      
    }
  va_end(args);
  return (somme);
}
