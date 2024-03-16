#include "dog.h"
#include <stdlib.h>

/**
 *
 *
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{

  
  dog_t *new_dog = NULL;
  new_dog->name = name;
  new_dog->age = age;
  new_dog->owner = owner;

  new_dog = malloc(sizeof(dog_t));
  if (new_dog == NULL)
    {
      return (NULL);
    }

  return (new_dog); 


}
