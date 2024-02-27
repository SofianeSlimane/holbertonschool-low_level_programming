#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
  int i;
  
 
  if (n <= 0)
    {
      _putchar('\n');
    }
  
  else
    {
      _putchar('\\');
      _putchar('\n');
      for (i = 0; i < n; i++)
	{
    
	  _putchar(' ');
	}
      _putchar('\n');
    }
}
	 

	  
	 
