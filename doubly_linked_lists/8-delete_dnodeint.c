#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at a given index
 * @head: pointer to tpointer head which points to the first node
 * @index: index
 * Return: 1 or -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr;
	dlistint_t *ptr2;

if (*head == NULL)
{
	return (-1);
}
if (index == 0)
{
	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	*head = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
	return (1);
}
ptr = *head;
i = 0;
while (ptr != NULL && i < index)
{
	if (ptr->next == NULL)
		return (-1);
	ptr = ptr->next;
	i++;
}
ptr2 = ptr->prev;
if (ptr->next == NULL)
{
	ptr2->next = ptr;
	ptr->prev = ptr2;
	free(ptr);
	return (1);
}
ptr2->next = ptr->next;
ptr->next->prev = ptr2;
free(ptr);
return (1);
}
