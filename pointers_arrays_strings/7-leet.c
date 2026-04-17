#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
	int i, j;
	char l[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char n[] = {'4', '3', '0', '7', '1', '\0'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j] || s[i] == (l[j] - 32))
				s[i] = n[j];
		}

	}

	return (s);
}
