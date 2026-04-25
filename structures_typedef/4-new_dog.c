#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - copy a string taken as a parameter and return it
 * @str: pointer to string to be copied
 * Return: pointer to string containing copy of given string
 */

char *_strdup(char *str)
{
	int i;
	char *str2;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{}
	str2 = malloc(sizeof(char) * j + 1);

	if (str2 == NULL)
	{
		free(str2);
		return (NULL);
	}
	for (i = 0; i <= j; i++)
	{
		str2[i] = str[i];
	}

	return (str2);
	free(str2);
}

/**
 * new_dog - create a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strdup(name);
	new_dog->age = age;
	new_dog->owner = _strdup(owner);

	return (new_dog);
}
