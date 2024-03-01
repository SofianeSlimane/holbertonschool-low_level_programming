#include "main.h"

/**
 * print_rev - check the code
 *@s: chaine de caracteres
 *
 */

void print_rev(char *s)
{
int i;
int taille;

for (taille = 0 ; s[taille] != '\0'; taille++)
{
}
if (taille > 0)
{
for (i = taille - 1 ; i != '\0'; i--)
{
_putchar(s[i]);
}
_putchar(s[i]);
}
_putchar('\n');
}
