#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of the triangle
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
int i, j, k, s;
i = 0;
j = 0;
k = 0;
s = size - 1;
if (size <= 0)
{
_putchar('\n');
return;
}

while (i < size)
{
while (j < s)
{
_putchar(' ');
j++;
}
while (k <= i)
{
_putchar('#');
k++;
}
_putchar('\n');
i++;
s--;
k = 0;
j = 0;
}
}
