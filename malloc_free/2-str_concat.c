#include "main.h"
#include <stdlib.h>




char *str_concat(char *s1, char *s2)
{
  
  int i;
  int k;
  char *s3;

  if (s1 == NULL)
    {
      s1 = "";
    }
  else if (s2 == NULL)
    {
      s2 = "";
    }
  else
    {
  for (i = 0; i != '\0'; i++)
    {
      s1[i] += s2[i];
    }
    } 
  
  s3 = malloc(i * sizeof(char));
  if (s3 == NULL)
    {
      return (NULL);
    }
  for (k = 0; k != '\0'; k++)
    {
      s3[i] += s1[k];
    }
  return(s3);
  free(s3);
}
