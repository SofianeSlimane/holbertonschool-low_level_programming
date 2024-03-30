#include "lists.h"
/**
 * print_list - prints elements of a singly linked list
 * @h: First node which points to another node
 * Return: number of nodes
 */



size_t print_list(const list_t *h)
{
	size_t numberOfNodes;
	const list_t *pointer;

	pointer = malloc(sizeof(const list_t));
	pointer = h;
	for (numberOfNodes = 0; pointer != NULL; numberOfNodes++)
	{
		if (pointer->str == NULL)
		{
			printf("[0] (nil)\n");
			pointer = pointer->next;
			numberOfNodes++;
		}
		printf("[%u] %s\n", pointer->len, pointer->str);
		pointer = pointer->next;
		}
	return (numberOfNodes);
}
