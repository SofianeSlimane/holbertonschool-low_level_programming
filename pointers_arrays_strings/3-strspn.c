#include "main.h"
/**
 * _strspn - returns length of substring
 * @s: string
 * @accept: characters to be found
 * Return: index of substring made of accept
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
int len = 1;
for (i = 0; accept[i] != '\0'; i++)
{
for (j = 0; i >=  j; j++)
{
if (accept[i] == *s)
{
len++;
}
else if (accept[i] == '\0')
{
break;
}
}
}
return (len);
}
