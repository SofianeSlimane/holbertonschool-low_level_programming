#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers
 * @separator: separator
 * @n: numbers of integers passed to the functio,
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (separator == NULL)
{
}
else
{
printf("%s", separator);
}
}
printf("\n");
}
