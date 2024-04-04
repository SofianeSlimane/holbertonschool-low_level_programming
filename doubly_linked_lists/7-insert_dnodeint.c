#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at a give position
 * @h: pointer to pointer h which points to the first node of the list
 * @idx: give index where node should be added
 * @n: integer data to be added to the new node
 * Return: the newly created node
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *ptr;
	unsigned int i;

	if (*h == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (idx == 0)
	{
		*h = newNode;
		return (newNode);
	}
	ptr = *h;
	i = 0;
	while (ptr != NULL && i != (idx - 1))
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr->next == NULL)
	{
		return (NULL);
	}
	newNode->next = ptr->next;
	newNode->prev = ptr;
	ptr->next = newNode;
	return (newNode);
}
