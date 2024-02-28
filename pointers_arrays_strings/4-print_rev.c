#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
  int i;
  for (i = '\0' - 1; s[i] != '0'; i--)
    {
      _putchar(s[i]);
    }
}
