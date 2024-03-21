#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>




int (*get_op_func(char *s))(int, int)
{
 
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
 int i;
 while (ops[i].op != NULL)
   {
     if (ops[i].op == NULL || ops[i].f == NULL)
       {
	 return (NULL);
       }
     s = ops[i].op;
     i++;
   }
 return(get_op_func(s));
}
