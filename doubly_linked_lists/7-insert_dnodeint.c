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
	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = NULL;

	i = 0;
	while (h != NULL)
	{
		if (i == (idx - 1))
		{
			newNode->prev = *h;
			newNode->next = (*h)->next;
			*h = newNode;
			return (newNode);
		}
		*h = (*h)->next;
		i++;
	}
	return (NULL);
}
