#include "lists.h"
/**
 * list_len - returns the number of elements in a singly linked list
 * @h: first node
 * Return: number of elements (nodes)
 */






size_t list_len(const list_t *h)
{
	size_t numberOfNodes;
	const list_t *pointer;

	pointer = malloc(sizeof(const list_t));
	pointer = h;

	for (numberOfNodes = 0; pointer != NULL; numberOfNodes++)
	{
		pointer = pointer->next;
	}
	return (numberOfNodes);
}
