#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
  int i;
  for (i = 0; i < *s; i++)
    {
      printf("%d", *s[i]);
    }
  return (i);
}
