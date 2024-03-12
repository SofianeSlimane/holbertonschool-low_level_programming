#include "main.h"
#include <stdlib.h>




char *str_concat(char *s1, char *s2)
{
  int i;
  int j;
  int k;
  int l;
  char *s3 = NULL;
 
  for (k = 0; s1[k] != '\0'; k++)
    {}
  for (l = 0; s2[l] != '\0'; l++)
    {}


  s3 = malloc((l + k + 1) * sizeof(char));
  if (s3 == NULL)
    {
      return (NULL);
    }
  i = 0;
  j = 0;
 
  while (s1[i] != '\0')
    {
      if (s1 == NULL)
	{
	  s1 = "";
	}
      s3[j] = s1[i];
      i++;
      j++;
    }
  i = 0;
  while (s2[i] != '\0')
    {
      if (s2 == NULL)
	{
	  s2 = "";
	}
      s3[j] = s2[i];
      i++;
      j++;
    }
  return (s3);
  free(s3);
}
