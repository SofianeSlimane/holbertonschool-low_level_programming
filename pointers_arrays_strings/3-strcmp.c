#include "main.h"

/**
 * _strcmp - compare chaine de caracteres
 * @s1: chaine de caracteres
 * @s2: chaine de caracteres
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
int j;
for (j = 0; s1[j] != '\0' || s2[j] != '\0'; j++)
{
if (s1[j] != s2[j])
{
return (s1[j] - s2[j]);
}
else if (s1[j] < s2[j])
{
return (-15);
}
else if (s1[j] > s2[j])
{
return (15);
}
}
return (0);
}
