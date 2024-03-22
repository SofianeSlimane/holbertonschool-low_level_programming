#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <string.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct op - Struct op
 *
 * @sp: specifier
 * @f: function associated
 */
typedef struct sp
{
char *sp;
void (*f)(va_list args);
} sp_t;

void print_c(va_list args);
void print_i(va_list args);
void print_f(va_list args);
void print_s(va_list args);

#endif
