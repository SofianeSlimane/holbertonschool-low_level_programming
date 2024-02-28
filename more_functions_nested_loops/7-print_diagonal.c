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
 
  if (n > 0)
    {
      for (i = 0; i < n; i++)
	{
	  for (j = 0; i < j; j++)
	    {
	      _putchar(' ');
	      _putchar('\\');
	      _putchar('\n');
	    }
	}
    }
  else
    {
      _putchar('\n');
    }
}
		     
	      
	  
	     
               
       
	
      
	
         
	 
