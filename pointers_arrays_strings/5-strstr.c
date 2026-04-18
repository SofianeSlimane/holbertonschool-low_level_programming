#include "main.h"
/**
 * _strlen - check the code
 *@s: chaine de caracteres
 *
 * Return: Always 0.
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
 * _strstr - locates substring
 * @haystack: string
 * @needle: characters to be matched
 * Return: pointer to beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, count, len_needle;
	char *first_occur;

	count = 0;
	len_needle = _strlen(needle);
	if (len_needle == 0)
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		first_occur = haystack + i;
		for (j = 0; len_needle != count; j++)
		{
			if (needle[j] == haystack[i])
			{
				count++;
				if (count == len_needle)
					return (first_occur);
				i++;
			}
			else
			{
				count = 0;
				break;
			}

		}

	}
	return ('\0');
}
