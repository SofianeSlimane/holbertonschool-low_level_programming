#include "main.h"





char *_strncpy(char *dest, char *src, int n)

{
  int taille;
  int i;

  for (taille = 0; src[taille] != '\0'; taille++)
    {
    }

  for (i = 0; i <= n; i++)
    {
      dest[i] = src[i];
    }
}
