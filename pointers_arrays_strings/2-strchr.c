#include "main.h"



char *_strchr(char *s, char c)

{
  int i;
  for (i = 0; s[i] != '\0'; i++)
    {
      if (s[i] == c)
	{
	  s[i] = c;
	}
      else if (s[i] != c)
	{
	  return ('\0');
	}
    }
  return (s);
}
  
    
