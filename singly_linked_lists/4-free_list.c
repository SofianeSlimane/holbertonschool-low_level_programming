#include "lists.h"



void free_list(list_t *head)
{
list_t *pointer;
pointer = head;
if (head == NULL)
{
	free(head);
}

while (pointer != NULL )
{
	pointer = pointer->next;
	free(head);
	head = pointer;
	
}
}
