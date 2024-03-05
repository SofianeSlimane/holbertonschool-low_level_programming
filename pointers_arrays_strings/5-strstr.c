#include "main.h"
/**
 * _strstr - locates substring
 * @haystack: string
 * @needle: characters to be matched
 * Return: pointer to beginning of located substring
 */




char *_strstr(char *haystack, char *needle)
{
int i;
for (i = 0; haystack[i] != '\0' - 1; i++)
{
if (haystack[i] == *needle)
{
haystack = haystack + i;
return (haystack);
}
}
return ('\0');
}
