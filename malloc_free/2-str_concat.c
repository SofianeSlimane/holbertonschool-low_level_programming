#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenate two strings
 *@s1: string 1
 *@s2: string 2
 * Return: s3
 */

char *str_concat(char *s1, char *s2)
{
int i, j, k, l;
char *s3 = NULL;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (k = 0; s1[k] != '\0'; k++)
{
}
for (l = 0; s2[l] != '\0'; l++)
{
}
s3 = malloc((l + k + 1) * sizeof(char));
if (s3 == NULL)
{
return (NULL);
}
i = 0;
j = 0;
while (s1[i] != '\0')
{
s3[i] = s1[i];
i++;
}
j = 0;
while (s2[j] != '\0')
{
s3[i] = s2[j];
i++;
j++;
}
s3[i] = '\0';
return (s3);
}
