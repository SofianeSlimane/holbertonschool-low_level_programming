#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_c - prints character
 * @args: argument
 *
 * Return: Nothing
 */

void print_c(va_list args)
{
printf("%c", va_arg(args, int));
}
/**
 * print_i - print integer
 * @args: argument
 *
 * Return: Nothing
 */
void print_i(va_list args)
{
printf("%d", va_arg(args, int));
}
/**
 * print_s - print string
 * @args: argument
 *
 * Return: Nothing
 */
void print_s(va_list args)
{
char *string = va_arg(args, char*);
if (string == NULL)
{
printf("(nil)");
}
printf("%s", string);
}
/**
 * print_f - print float
 * @args: argument
 *
 * Return: Nothing
 */
void print_f(va_list args)
{
printf("%f", va_arg(args, double));
}
/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
int i, j;
char *separator = "";
va_list args;
sp_t tab[] = {
{"c", print_c},
{"i", print_i},
{"f", print_f},
{"s", print_s},
{NULL, NULL}
};
i = 0;
j = 0;
va_start(args, format);
while (format[i] != '\0')
{
j = 0;
while (tab[j].sp != NULL)
{
if (*tab[j].sp == format[i])
{
printf("%s", separator);
tab[j].f(args);
separator = ", ";
break;
}
j++;
}
i++;
}
printf("\n");
}
