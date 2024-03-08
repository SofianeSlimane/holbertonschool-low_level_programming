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
int len = 0 ;
for (i = 0; accept[i] != '\0'; i++)
{
for (j = 0; i >= j; j++)
{
if (accept[i] == *s)
{
len++;
}
else if (accept[i] == '\0' || accept[i] != *s)
{
  break;
}
 
}
}
return (len + 1);
}
