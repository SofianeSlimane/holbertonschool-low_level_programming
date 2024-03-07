#include "main.h"
/**
 * _strstr - locates substring
 * @haystack: string
 * @needle: characters to be matched
 * Return: pointer to beginning of located substring
 */




char *_strstr(char *haystack, char *needle)
{
  while (*haystack != '\0' && *needle != '\0')
    {
      if (*haystack == *needle)
	{
	  return (needle);
	  haystack++;
	  needle++;
	}
    }
  return ('\0');
}
      
