#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print number of arguments passed to program
 *@argc: argc
 *@argv: argv
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
