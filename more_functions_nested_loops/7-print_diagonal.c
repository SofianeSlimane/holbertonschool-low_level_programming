#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
  int i;
  int j;
  if (n <= 0)
    {
      _putchar('\n');
    }
  
  else
    {
      for (i = 0; i == 1; i++)
	{
	  for (j = 0; j < n; j++)
	    {
	      _putchar(' ');
	    }
	  _putchar('\\');
	}
    }
}
