#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
  int i;
  int taille;
  

  for (taille = 0; str[taille] != '\0'; taille++)
    {
 
    }
  if (taille % 2 == 0)
    {
  for (i = (taille - 2) / 2; str[i] != '\0'; i++)
    {
      _putchar(str[i]);
    }
    }
  else if (taille % taille == 1)
    {
      i = taille -1;
      _putchar(str[i]);
      
    }
}
	
	 
	
