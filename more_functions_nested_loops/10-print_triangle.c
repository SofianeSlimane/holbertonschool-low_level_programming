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
  int k;

  if (size == 0)
    {
      _putchar('\n');
    }
  else
    {
      for (i = 0; i < size; i++)
	{
	  for (j = 0; j < i; j++)
	    {
	      for (k = 0; k < size; k++)
		{
		  _putchar(' ');
		    }
	      _putchar('#');
	    }
	  _putchar('\n');
	}
    }
}
	     
 
