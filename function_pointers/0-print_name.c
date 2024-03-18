#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints name using pointer to function
 * @name: pointer to name
 * @f: pointer to funciton that prints name
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
