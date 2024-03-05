#include "main.h"
0;276;0c
/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character
 * Return: pointer to character or /0
 */

char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c || c == '\0')
{
  s = s + i;
return (s);
}
}
return ('\0');
}
