#include "main.h"

/**
 * contains_char - check if s contains
 * @s: string
 * @c: char
 * Return: 0 or 1
 */
int contains_char(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (1);
	}
	return (0);
}

/**
 * _strspn - returns length of substring
 * @s: string
 * @accept: characters to be found
 * Return: index of substring made of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, count, curr_count;

	count = 0;
	curr_count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (curr_count > count)
			count = curr_count;
		if (contains_char(accept, s[i]))
			curr_count++;
		else
			curr_count = 0;
	}

	return (count);

}
