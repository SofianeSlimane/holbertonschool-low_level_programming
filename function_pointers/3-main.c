#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>





int main (int argc, char *argv[])
{
  
  int num1 = atoi(argv[1]);
  int num2 = atoi(argv[3]);
  int result = (*get_op_func(op))(num1, num2);
  if (argc != 4)
    {
      printf("Error\n");
      exit (98);
    }
  if (op != '+' || op != '-' || *op != '/' || op != '*' || op != '%')
    {
      printf("Error\n");
    }
  if ((argv[3] == 0 && argv[2] == '/') || (argv[3] == 0 && argv[2] == '%'))
  {
  printf("Error\n");
      exit (100);
    }
return (result);
}
