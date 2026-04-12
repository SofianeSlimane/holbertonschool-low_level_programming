#include "main.h"
#include <stdio.h>

/**
 * _strlen - get string's length
 * @s: string
 * Return: len of string as integer
 */

int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'  ; i++)
{
}
return (i);
}

/**
 * rev_string - reverse string
 * @s: string
 */
void rev_string(char *s)
{
int  i, j;
char tmp;
j = _strlen(s) - 1;
for (i = 0; i != j; i++)
{
tmp = s[i];
s[i] = s[j];
s[j] = tmp;
j--;
}
}
