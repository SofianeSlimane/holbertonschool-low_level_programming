#include "function_pointers.h"
/**
 * array_iterator - execute a function on each elemnts of an array
 * @array: array
 * @size: size of array
 * @action: pointer to function to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
