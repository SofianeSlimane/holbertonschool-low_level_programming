#include "lists.h"


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
		free(head);
		return (1);
	}
	
	*head = (*head)->next;
	free((*head)->prev);
	return (1);
}

ptr = *head;
ptr2 = NULL;
i = 0;
while (ptr != NULL && i != index)
{
	ptr = ptr->next;
	i++;
}
ptr2 = ptr->prev;
ptr2->next = ptr->next;
ptr->next->prev = ptr2;
free(ptr);
return (1);
}
	

