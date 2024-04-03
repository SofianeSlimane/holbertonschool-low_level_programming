#include "lists.h"
/**
 * get_dnodeint_at_index - returns a node at a given index
 * @head: pointer to first node
 * @index: index given to locate the node
 * Return: node at given index
 */



dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	while (head->next != NULL)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		if (i == index)
		{
			return (head);

		}
		head = head->next;
		i++;
	}
	return (head);
}
