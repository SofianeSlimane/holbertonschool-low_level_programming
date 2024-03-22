#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


int print_c(va_arg(args, char))
{
  printf("%c", va_arg(args, char));
  return (0);
}
int print_i(va_arg(args, int))
{
  printf("%d", va_arg(args, int));
}
int print_s(va_arg(args, char*))
{
  printf("%s", va_arg(args, char*));
  return (0);
}
print_f(va_arg(args, float))
{
  printf("%f", va_arg(args, float));
  retrurn(0);
}
	 
void print_all(const char * const format, ...)
{
  int i, j;
  va_list args;
  va_start(format, args);
  spt_ tab[] = {
{"c", print_c},
{"i", print_i},
{"f", print_f},
{"s", print_s},
{NULL, NULL}
};

  while (format != NULL && tab[i].sp != NULL)
    {
      while (format[i] != NULL && tab[j].sp != NULL)
	{
	  if (tab[i].sp == format[j])
	    {
	      tab[i].f(va_arg(args));
	    }
  
  
    
}

	
