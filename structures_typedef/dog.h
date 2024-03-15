#ifndef _SAMPLE_HEADER_H_
#define _SAMPLE_HEADER_H_

/**
 * struct dog - first structure of a dog
 * @name: name
 * @age: age
 * @owner: owner
 */
typedef struct dog dog_t;
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
