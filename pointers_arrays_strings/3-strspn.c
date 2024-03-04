#include "main.h"

unsigned int _strspn(char *s, char *accept)

{
  unsigned int i;
  for (i = 0; s[i] != '\0'; i++)
    {
      if (s[i] == accept)
	{
	  s[i] += accept;
	}
    }
  return(i);
}
  
