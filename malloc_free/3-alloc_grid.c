#include "main.h"
#include <stdlib.h>




int **alloc_grid(int width, int height)
{
  int i;
  int **ptp;
  if (width <= 0 || height <= 0)
    {
      return (NULL);
    }
  
  ptp = malloc(width * sizeof(int*));
 
  for (i = 0; i < width; i++)
    {
      ptp[i] = malloc(height * sizeof(int));
    }	      

  if (ptp == NULL)
    {
      return (NULL);
    }
  
  
	    
    	    
	    return (ptp);
}

        
  
