#include "main.h"


char *_strcpy(char *dest, char *src)
{
  int i;
  int taille;
  for (taille = 0; src[taille] != '\0'; taille++)
    {
    }

  for (i = 0; i <= taille; i++)
    {
      dest[i] = src[i];
      
    }
  return (dest);
}
 
