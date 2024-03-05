#include "main.h"




void print_chessboard(char (*a)[8])


{

  int i;

  for (i = 0; a[i] != '\0'; i++)
    {

      if a([i] => 'a' && a[i] <= 'z' || a[i] => 'A' && a[i] <= 'Z')
	    {
	      _putchar(a[i]);
	    }
      else
	{
	  _putchar('\n');
	}
    }
}
