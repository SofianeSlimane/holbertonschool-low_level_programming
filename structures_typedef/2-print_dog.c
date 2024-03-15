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
else if (d->name == NULL)
{
printf("Name: (nil)");
}
else if (d->age == 0 || d->owner == NULL)
{
printf("(nil)");
}
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}