#include "main.h"
#include <stdlib.h>




char *create_array(unsigned int size, char c)
{
 char *tab;
  unsigned int i;
  if (size == 0)
    {
      return (NULL);
    }
  else
    {
      for (i = 0; i < size; i++)
	{
	  tab = malloc(i * sizeof(char));
	  tab += c;
	}
    }
  if (tab == NULL)
    {
      return (NULL);
    }
  
      return(tab);
      free(tab);
}    
