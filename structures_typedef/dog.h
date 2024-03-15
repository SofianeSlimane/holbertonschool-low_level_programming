#ifndef _SAMPLE_HEADER_H_
#define _SAMPLE_HEADER_H_

/**
 * struct dog - first structure of a dog
 * @name: name
 * @age: age
 * @owner: owner
 */



struct dog
{
char *name;
float age;
char *owner;
};
/**
 * dog_t - typdef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
