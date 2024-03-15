#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: number of bytes to be allocated
 * Return: pointer p
 */

void *malloc_checked(unsigned int b)
{
  unsigned int *p;
  
   p = malloc(b);
if (p == NULL)
{

exit(98);
}
 return (p);
}
