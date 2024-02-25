#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
  int i;

  for (i = 0; i != 98; i++)
    {
      if (n < 98)
	{
	  _putchar(n + '0');
	  n++;
	}
      else if (n > 98)
	{
	  _putchar(n + '0');
	  n--;
	}
    }

}
