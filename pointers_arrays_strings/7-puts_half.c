#include "main.h"

/**
 * puts_half - check the code
 *@str: chaine de caracteres
 *
 */

void puts_half(char *str)
{
int i;
int taille;
int j;
for (taille = 0; str[taille] != '\0'; taille++)
{
}
if (taille % 2 == 0)
{
for (i = (taille / 2) ; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
else if (taille % 2 != 0)
{
for (j = (taille / 2) + 1; str[j] != '\0'; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
}
