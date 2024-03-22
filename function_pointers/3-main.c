#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - intialize variables to be used by get_op function
 * @argc: number of arguments written including command line
 * @argv: array of strings of argc elements
 * Return: 0
 */




int main(int argc, char *argv[])
{
int num1;
int num2;
char *operator;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = argv[2];
if (operator == NULL || get_op_func(operator) == NULL)
{
printf("Error\n");
exit(99);
}
if (num2 == 0  && (argv[2][0] == '/' || argv[2][0] == '%'))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(operator)(num1, num2));
return (0);
}
