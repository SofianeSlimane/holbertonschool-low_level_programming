#include "main.h"








int _atoi(char *s)
{
  int i;
  for (i = 0; s[i] != '\0'; i++)

    {
      if (!(s[i] >= '0' || s[i] <= '9'))
	{
	  return (0);
	}
      else
	{
	  _putchar(s[i] + '0');
    }
    }
  return (0);
}
  
     
