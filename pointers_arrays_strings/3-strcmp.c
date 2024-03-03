#include "main.h"

int _strcmp(char *s1, char *s2)
{

  int taille1;
  int taille2;
  int j;
  for (taille1 = 0; s1[taille1] != '\0'; taille1++)
    {
    }
  for (taille2 = 0; s2[taille2] != '\0'; taille2++)
    {
    }




  for (j = 0; s1[j] == '\0' || s2[j] == '\0'; j++)
    {
      if ((s1[j] =! s2[j]))
	{
	  return (s1[j] - s2[j]);
	}
      else if (s1[j] < s2[j])
	{
	  return (-15);
	}
      else if (s1[j] > s2[j])
	{
	  return (15);
	}
      
    }
  return (0);
}
