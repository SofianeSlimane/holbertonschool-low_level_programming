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
 
  for (i= 0; i < n; i++)
    {
       for (j = 0; j < n; j++)
        {
          if (n <= 0)
	    {
	      _putchar('\n');
	    }
	  else
	    {
	      _putchar('\\');
	    }
	}
       _putchar('\n');
       for (k = 0; k < n; k++)
	 {
	   _putchar(' ');    
        }
    }
}
	      
	  
	     
               
       
	
      
	
         
	 
