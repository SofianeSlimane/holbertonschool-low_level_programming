#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>





int main (int argc, char *argv[])
{

  int num1;
  int num2;
  char *operator;
 
  if (argc != 4)
    {
      printf("Error\n");
      exit (98);
    }
  operator = argv[2];
  num1 = atoi(argv[1]);
  num2 = atoi(argv[3]);
  if (operator == NULL)
    {
      printf("Error\n");
      exit (99);
    }
	
  if (num2 == 0  && (argv[2][0] == '/' || argv[2][0] == '%'))
  {
    printf("Error\n");
      exit (100);
    }
  

  printf("%d\n", get_op_func(operator)(num1, num2));
  return (0);
}
