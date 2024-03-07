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
  int j;

  for (i = 0; haystack[i] != '\0'; i++)
    {
      for (j = 0; i >= j; j++)
	{
	  if (needle[i] == *haystack)
	    {
	      haystack += i;
	      return (haystack);
	    }
	  
	}
    }
  return ('\0');
}
