#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: pointer to new string s3
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
char *s3 = NULL;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] != '\0'; i++)
{
}
for (j = 0; s2[j] != '\0'; j++)
{
}
if (n > j)
{
n = j;
}
s3 = malloc((i + n + 1) * sizeof(char));
if (s3 == NULL)
{
return (NULL);
}
j = 0;
for (i = 0; s1[i] != '\0'; i++)
{
s3[i] = s1[i];
}
j = 0;
while (j < n && s2[j] != '\0')
{
s3[i] = s2[j];
i++;
j++;
}
s3[i] = '\0';
return (s3);
}
