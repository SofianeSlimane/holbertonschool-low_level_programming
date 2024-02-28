#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
  int i;
  

  for (i = 0; str[i] != '\0'; i++)
    {
      if (i % 2 != 0)
	{
	  _putchar('\0');
	}
      else
	{
	  for (i = i / 2; str[i] != '0'; i++)
	    {
	      _putchar(str[i]);
	    }
	}
    }
  _putchar('\n');
}
