#include "main.h"
#include <stdio.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
  int i;
  for (i = 0; a[n] != '\0'; i++)
    {
      printf("%d", a[n]);
      _putchar(',');
      _putchar(' ');
    }
  _putchar('\n');
}
