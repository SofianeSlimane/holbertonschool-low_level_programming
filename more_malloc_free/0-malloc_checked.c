#include "main.h"
#include <stdlib.h>


void *malloc_checked(unsigned int b)
{
  void *p;
  p = malloc(b * sizeof(unsigned int));
  if (p == NULL)
    {
      exit (98); 
     }
  return (p);
}
  
  