#include "lists.h"
/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: head which is a pointer to the first node of the lsit
 * Return: number of nodes
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t numberOfNodes;
	const dlistint_t  *pointer = h;

	for (numberOfNodes = 0; pointer != NULL; numberOfNodes++)
	{
		printf("%d\n", pointer->n);
		pointer = pointer->next;
	}

	return (numberOfNodes);
}
