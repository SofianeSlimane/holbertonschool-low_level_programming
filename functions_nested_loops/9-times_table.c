#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void  times_table(void)
{
  int i;
  int a = 48;
  int j;

  for (i = 48; i <= 57; i++)
    {
      for (j = 48; j <= 57; j++)
	{
	  _putchar(a * i);
	  _putchar(',');
	  _putchar(' ');
	  a++;
	    }
      _putchar('\n');
      
    }
}
	  
  
