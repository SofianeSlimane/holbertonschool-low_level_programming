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
     printf("Name: (nil)\n");
   }
 else
   {
printf("Name: %s\n", d->name);
   }
 if (d->age == 0.0)
   {
     printf("Age: 0.000000\n");
   }
 else 
   {
printf("Age: %f\n", d->age);
   }
 if (d->owner == NULL)
   {
     printf("Owner: (nil)\n");
   }
 else
   {
printf("Owner: %s\n", d->owner);
   }
}
