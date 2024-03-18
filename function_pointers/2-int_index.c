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
i = 0;
while (i <= size && cmp(array[i]) == 0)
{
i++;
}
if (i == size)
{
return (-1);
}
return (i);
}
