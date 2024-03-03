#include "main.h"



char *_strcat(char *dest, char *src)
{

  int i;
  int taille;
  char *ptr = dest;

  for (taille = 0; dest[taille] != '\0'; taille++)
    {
    }
  for (i = 0 ; i < taille; i++)
    {
      dest[taille + 1] += src[i];
    }
  
  return (ptr);
}
