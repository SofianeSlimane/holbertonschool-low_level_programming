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
int j;
if (size <= 0)
{
return (-1);
}
i = 0;
while (i < size && cmp(array[i]) == 0)
{
i++;
}
j = 0;
while (i < size && cmp(array[j]) == 0)
{
if (cmp(array[j]) != 0)
{
return (-1);
}
j++;
}
return (i);
}
