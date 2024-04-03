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
	dlistint_t *ptr2;
	unsigned int i;
	unsigned int j;
	unsigned int k;

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
	newNode->prev = NULL;
	newNode->next = NULL;
	
	ptr = *h;
	ptr2 = *h;
	i = 0;
	while (*h != NULL)
	{
		ptr2 = ptr2->next;
		i++;
	}
	j = 0;
	while (j != (idx - 1))
	{
		ptr = ptr->next;
		j++;
	}
	k = i;
	while (k != idx)
	{
		ptr2 = ptr2->prev;
		k--;
	}
	newNode->next = ptr2;
	newNode->prev = ptr;

	ptr2->prev = newNode;
	ptr->next = newNode;
	return (newNode);

}
