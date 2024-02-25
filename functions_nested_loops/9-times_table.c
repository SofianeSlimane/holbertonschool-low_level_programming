#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void  times_table(void)
{
  int i;
  int a = 0;
  int b = 0;
  for (i = 0; i <= 10; i++)
    {
      if (i <= 10)
	{
       
	  
	
	   _putchar((a * b)+ '0');
	  _putchar(',');
	  _putchar(' ');
	  _putchar(' ');
	  a++;
	  b++;
	    
	}
      else if (i == 11)
	{
	  _putchar('\n');
	  a++;
	  b++;
	}
    }
}
  
