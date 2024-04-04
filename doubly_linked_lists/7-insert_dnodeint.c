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

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	if (*h != NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
		newNode->prev = NULL;
	}
	if (*h == NULL || idx == 0)
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

	newNode->next = ptr->next;
	newNode->prev = ptr;
	ptr->next = newNode;

	return (newNode);
}
