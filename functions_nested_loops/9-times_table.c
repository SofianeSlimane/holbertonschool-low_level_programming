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
  for (i = 0; i <= 9; i++)
    {
      for (r = 0; r <= 9; r++)
	{
	  _putchar((r * i) + '0');
	  _putchar(' ');
	}
    }
}
