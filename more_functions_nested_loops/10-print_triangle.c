#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
  int i;
  int j;

  for (i = 0; i < size; i++)
    {
      for (j = 0; j < size; j++)
	{
	  if (size <= 0)
	    {
	      _putchar('\n');
	    }
	  else
	    {
	  _putchar('#');
	}
      _putchar('\n');
    }
}
  _putchar('\n');
}
