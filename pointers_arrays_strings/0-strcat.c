#include "main.h"



char *_strcat(char *dest, char *src)
{

  int i;
  int taille;

  for (taille = 0; src[taille] != '\0'; taille++)
    {
    }
  for (i = 0; i <= taille; i++)
    {
      dest[i] = dest[i] + src[i];
    }
  return (dest);
}
