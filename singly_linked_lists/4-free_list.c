#include "lists.h"
/**
 * free_list - frees list
 * @head: pointer to first node
 */


void free_list(list_t *head)
{
list_t *pointer;


while (head != NULL)
{
	pointer = head;
	head = head->next;
	free(pointer->str);
	free(pointer);
}
}
