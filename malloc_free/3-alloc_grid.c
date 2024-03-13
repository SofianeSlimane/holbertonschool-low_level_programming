#include "main.h"
#include <stdlib.h>




int **alloc_grid(int width, int height)
{
  int i, j, k;
  int **ptp;
  if (width <= 0)
    {
      return (NULL);
    }
  else if (height <= 0)
    {
      return (NULL);
    }
  
  ptp = malloc(width * sizeof(int*));
  for (i = 0; i < width; i++)
    {
      ptp[i] = malloc(height * sizeof(int*));
		      		     
    }	      
	if (ptp == NULL )
	  {
	    return (NULL);
	  }
	else
	  {
	    for (j = 0; j < width; j++)
	      {
		ptp[j] = 0;
	      }
	  }
	    for (k = 0; k < width; k++)
	      {
		free(ptp[k]);
	      }
	    return (ptp);

}
        
  
