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
  int j;

  for (i = 0; i <= 10; i++)
    {
      for (j = 0; j <= 10; j++)
	{
      if (j <10)
	{
	  _putchar((a * i) + '0');
	  _putchar(',');
	  _putchar(' ');
	  _putchar(' ');
	}
      else if (i == 10)
	{
	  _putchar((a * i) + '0');
	}
      a++;
	}
    }
}
  
