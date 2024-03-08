#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print number of arguments passed to program
 *@argc: argc
 *@argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%d\n", atoi(argv[i]));
}
return (0);
}
