#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints passed strings
 * @separator: separator
 * @n: number of arguments
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *curr_s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		curr_s = va_arg(args, char*);
		if (curr_s == NULL)
			printf("(nil)");
		else
			printf("%s", curr_s);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
