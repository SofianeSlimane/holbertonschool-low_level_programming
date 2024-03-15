#include "main.h"
#include <stdlib.h>


char *string_nconcat(char *s1, char *s2, unsigned int n)


{
  unsigned int i;
  unsigned int j;
  
  char *s3 = NULL;

  if (s1 == NULL)
    {
      s1 = "";
    }
  if (s2 == NULL)
    {
      s2 = "";
    }

  for (i = 0; s1[i] != '\0'; i++)
    {
    }
  for (j = 0; s2[j] != '\0'; j++)
    {
    }
    

  s3 = malloc((i + j + 1) * sizeof(char));
  if (s3 == NULL)
    {
      return (NULL);
    }
  i = 0;
  j = 0;

  while (s1[i] != '\0')
    {
      s3[i] = s1[i];
      i++;
    }
  j = 0;
  while (j < n && s2[j] != '\0')
    {
      if (j < n)
	{
      s3[i] = s2[j];
      i++;
      j++;
	}
    }
  s3[i] = '\0';
  return (s3);
    

}
