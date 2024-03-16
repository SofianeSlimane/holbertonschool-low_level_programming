#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
  
  char *copyname = name;
    char *copyowner = owner;
    dog_t *new_dog;
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
      {
	return (NULL);
      }

    name = malloc(sizeof(name));
    if (name == NULL)
      {
	return (NULL);
      }
    new_dog->name = copyname; 
    
new_dog->age = age;

 owner = malloc(sizeof(owner));
 if (owner == NULL)
   {
     return (NULL);
   }

new_dog->owner = copyowner;

return (new_dog);
}
