#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void  times_table(void)
{
  int i;
  int r;
  for (i = 0; i <= 10; i++)
    {
      for (r = 0; r <= 9; r++)
	{
	if (r <= 9)
	  {
	
	  _putchar((i * r ) + '0');
	  _putchar(',');
	  _putchar(' ');
	  _putchar(' ');
	}
	else
	  {
	    _putchar('\n');
	  }
	}
    }
}
