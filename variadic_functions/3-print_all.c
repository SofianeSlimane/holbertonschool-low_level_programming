#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


void print_c(va_list args)
{
  
  printf("%c", va_arg(args, int));
  
}
void print_i(va_list args)
{
  printf("%d", va_arg(args, int));
}
void print_s(va_list args)
{
  if (args == NULL)
    {
      printf("(nil)");
    }
  printf("%s", va_arg(args, char*));
 
}
void print_f(va_list args)
{
  printf("%f", va_arg(args, double));
  
}
	 
void print_all(const char * const format, ...)
{
  char *separator = ", ";
  int i, j;
  va_list args;
  sp_t tab[] = {
{"c", print_c},
{"i", print_i},
{"f", print_f},
{"s", print_s},
{NULL, NULL}
};
  i = 0;
  j = 0;
  va_start(args, format);
  while (format != NULL && tab[i].sp != NULL)
    {
      while (format[i] != '\0' && tab[j].sp != NULL)
	{
	  if (*tab[i].sp == format[j])
	    {
	      tab[i].f(args);
	      printf("%s", separator);
	      
	    }
  
  
    
}
    }
      printf("\n");
}
	
