#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
  int i ;
  int taille;
  
  for (taille = 0 ; s[taille] != '\0'; taille++)
    {
    }
  for (i = taille - 1 ; i != '\0'; i--)
    {
      if ((taille  = '\0'))
	{
	  _putchar('\n');
	}
      else
	{
      _putchar(s[i]);
	}
    }
  _putchar(s[i]);
  _putchar('\n');
}
