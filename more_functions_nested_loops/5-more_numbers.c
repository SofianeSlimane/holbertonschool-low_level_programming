#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int i;
int j;
for (i = 0; i <= 10; i++)
{
  for (j = '0'; j <= 14; j++)
    if (j < 10)
      {
	putchar(j + '0');
      }
    else if ( j => 10 && j <= 14)
      {
	putchar(j % 10 + '0');
      }
{
  _putchar (j + '0');
}
_putchar('\n');
}
}
