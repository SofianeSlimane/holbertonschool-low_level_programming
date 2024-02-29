#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
  int i = 0;
  int taille;
  
  for (taille = 0 ; s[taille] != '\0'; i++)
    {
    }
  for (i = taille - 1; i < s[taille]; i--)
    {
      _putchar(s[i]);
    }
}
     
