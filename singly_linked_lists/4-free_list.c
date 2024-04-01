#include "lists.h"



void free_list(list_t *head)
{
list_t *pointer;
pointer = head;
while ( pointer != NULL && head != NULL)
{
	pointer = head;
	head = head->next;

	free(pointer->str);
	
	free(pointer);
	
}
}
