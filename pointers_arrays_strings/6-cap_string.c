#include "main.h"



/**
 * is_separator - check if char is a separator
 * @c: char
 * Return: 0 if not or 1 if yes
 */
int is_separator(char c)
{
	int i;
	char s[] = {' ', '\t', '\n', ',', ';',
		 '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (1);
		}
	}
	return (0);

}
/**
 * is_capital - return if character is a capital letter
 * @c: char
 * Return: 0 or 1
 */
int is_capital(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
/**
 * is_lower - return if character is a lowercase letter
 * @c: char
 * Return: 0 or 1
 */
int is_lower(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
/**
 * cap_string - Capitalizes all words of a string
 * @s: pointer to first elem of array of char
 * Return: pointer to first elem of s
 */
char *cap_string(char *s)
{
	int i, is_first_letter;

	is_first_letter = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_separator(s[i]))
		{
			is_first_letter = 1;
			continue;
		}
		if (is_first_letter)
		{
			is_first_letter = 0;
			if (is_capital(s[i]))
				continue;
			else if (is_lower(s[i]))
				s[i] -= 32;
			else
				continue;
		}
	}
	return (s);
}
