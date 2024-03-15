#include "dog.h"
#include <stdlib.h>

/**
 *
 *
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
  char **p1 = &name;
  char **p2 = &owner;
  if (new_dog == NULL)
    {
      return (NULL);
    }
  

  new_dog->p2 = owner;
  new_dog->p1 = name;
  new_dog.age = age;
}
