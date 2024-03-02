#include "main.h"
#include <stdio.h>







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
	  printf("%d", s[i]);
    }
    }
  return (0);
}
  
     
