#include <stdio.h>
#include "dog.h"
#include "main.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to structure
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
  struct dog dog;
  d = &dog;

d -> name = "Doggo";
d -> age = 2.5;
d -> owner = "Sofiane";
}

