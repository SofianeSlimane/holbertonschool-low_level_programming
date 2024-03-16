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
char *ptr1 = name;
char *ptr2 = owner;
dog_t *new_dog = NULL;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
new_dog->age = age;
new_dog->name = ptr1;
new_dog->owner = ptr2;
free(new_dog);
return (new_dog);
}
