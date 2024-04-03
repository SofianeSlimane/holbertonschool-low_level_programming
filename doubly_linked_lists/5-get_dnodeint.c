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

	if (head == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (head->next != NULL)
	{

		if (i == index)
		{
			return (head);

		}
		head = head->next;
		i++;
	}
	return (head);
}
