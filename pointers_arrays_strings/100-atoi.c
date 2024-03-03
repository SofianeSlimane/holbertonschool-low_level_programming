#include "main.h"
11;rgb:2b2b/2b2b/2b2b#include <stdio.h>







int _atoi(char *s)
{
  int i;
  
for (i = 0; s[i] != '\0'; i++)
  {
    if (s[i] >= '0' || s[i] <= '9')
      {
	s[i] -= '0';
      }
  }
 return (s[i]);
}
