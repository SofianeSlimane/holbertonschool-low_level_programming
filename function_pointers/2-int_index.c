#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function comparing values
 * Return: index of first element if cmp does not return 0
 */



int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
cmp(array[i]);
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (0);
}
