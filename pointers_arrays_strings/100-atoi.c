#include "main.h"
#include <stdio.h>
/**
 * _power10 - power a number by 10 a specific amount of times
 * @n: number to be powered (int)
 * @t: number of times to power by 10
 * Return: int
 */
int _power10(int n, int t)
{
int i;

for (i = 0; i < t; i++)
{
n *= 10;
}
return (n);
}
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
 * _strlen_num - get integer length within string
 * @s: string
 * Return: len of integer within string
 */

int _strlen_num(char *s)
{
int i, j;
j = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 48 && s[i] <= 57)
{
while (s[i] >= 48 && s[i] <= 57)
{
j += 1;
i++;
}
break;
}
}
return (j);
}


/**
 * _atoi - turns a string into an integer
 * @s: number as string
 * Return: int
 */
int _atoi(char *s)
{
int n, len, i, pow, n_length;
char sign;
n = 0;
len = _strlen(s);
n_length = _strlen_num(s);
pow = _power10(1, n_length - 1);
for (i = 0; i < len; i++)
{
if (n > 0 && s[i] && !(s[i] >= 48 && s[i] <= 57))
{
break;
}
if (s[i] == 45)
{
if (s[i + 1] >= 48 && s[i + 1] <= 57)
{
sign = s[i];
}
else
{
continue;
}
}
else if (s[i] >= 48 && s[i] <= 57)
{

n += (s[i] - 48) * pow;

pow /= 10;
}
}
if (sign == 45)
{
return (n * (-1));
}
if (n == 0)
{
return (0);
}
return (n);
}
