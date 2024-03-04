#include "main.h"




char *_memset(char *s, char b, unsigned int n)

{
  int taille;
  unsigned int i;
  for (taille = 0; s[taille] != '\0'; taille++)
    {
    }
	 for (i = 0; i < n; i++)
	   {
	     s[i] += b;
	   }
	 return (s); 
}
