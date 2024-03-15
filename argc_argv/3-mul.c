#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiple two integers
 * @argc: argc
 * @argv: argv
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
int i;
int product = 1;
if (argc == 3)
{
for (i = 1; i < argc; i++)
{
product *= atoi(argv[i]);
}
}
else if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", product);
return (0);
}