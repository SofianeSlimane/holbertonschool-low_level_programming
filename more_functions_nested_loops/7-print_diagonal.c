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
  int k;
 
  if (n <= 0)
    {
      _putchar('\n');
    }
  
  else
    {
      for (i = 0; i < n; i++)
	{
      
      for (j = 0; j < 1; j++)
	{
    
	  _putchar('\\');
      _putchar('\n');
       
	}
      for (k = 0; k < n; k++)
	{
	  _putchar(' ');
	}
	}
      _putchar('\n');
    }
}
	
      

	  
	 
