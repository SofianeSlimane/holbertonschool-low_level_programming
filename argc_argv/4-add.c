#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_array_valid - check if array contains integers only
 * @arr: argv
 * @len: argc
 * Return: 1 if valid or 0
 */
int is_array_valid(char *arr[], int len)
{
	int i, j;
	char *elem;

	for (i = 1; i < len; i++)
	{
		elem = arr[i];
		for (j = 0; elem[j] != '\0'; j++)
		{
			if (elem[j] <= 57 && elem[j] >= 48)
				continue;
			else
				return (0);
		}
	}
	return (1);

}

/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;
	if (is_array_valid(argv, argc) == 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", sum);
	return (0);
}
