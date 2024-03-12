#include "main.h"
#include <stdlib.h>




char *str_concat(char *s1, char *s2)
{
  int i;
  int j;
  char *s3;
  for (i = 0; s1[i] != '\0'; i++)
    {}
  for (j = 0; s2[j] != '\0'; i++)
    {}



  s3 = malloc(sizeof(char) * (i + j));
  if (s3 == NULL)
    {
      return (NULL);
    }

  if (s1 == NULL)
    {
      s1 = '\0';
    }
  while (s1[i] != '\0')
    {
      s3[j] = s1[i];
      i++;
      j++;
    }
  i = 0;
  if (s2 == NULL)
    {
      s2 = '\0';
	}
  while (s2[i] != '\0')
    {
      s3[j] = s2[i];
      i++;
      j++;
    }
  return (s3);
  free(s3);
}
