#include "dog.h"
#include "stdio.h"
#include <stdlib.h>
/**
 * print_dog - print structure
 * @d: pointer to structure
 */


void print_dog(struct dog *d)
{
if (d == NULL)
{
}
 if (d->name == NULL)
   {
     printf("Name: (nill)");
   }
 else
   {
printf("Name: %s\n", d->name);
   }
 if (d->age == 0)
   {
     printf("Age: (nill)");
   }
 else
   {
printf("Age: %f\n", d->age);
   }
 if (d->owner == NULL)
   {
     printf("Owner: (nill)");
   }
 else
   {
printf("Owner: %s\n", d->owner);
   }
}
