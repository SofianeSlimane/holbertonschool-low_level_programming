#include "main.h"
#include <stdlib.h>




int **alloc_grid(int width, int height)
{
  int i,k,l;
  int **ptp;
  if (width <= 0 || height <= 0)
    {
      return (NULL);
    }
  
  ptp = malloc(height * sizeof(int*));
  if (ptp == NULL)
    {
      return (NULL);
    }
  for (i = 0; i < height; i++)
    {
      
      ptp[i] = malloc(width * sizeof(int));
      if (ptp[i] == NULL)
	{
	  free(ptp[i]);
	  return (NULL);
	}
    }
 

   
    
  for (k = 0; k < height; k++)
    {
      for (l = 0; k < l; l++)
	{
      ptp[k][l] = 0;
	}
    }

	    return (ptp);
}

        
  
