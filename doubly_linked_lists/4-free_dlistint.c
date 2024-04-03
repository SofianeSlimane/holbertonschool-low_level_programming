#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to first node
 */




void free_dlistint(dlistint_t *head)
{
dlistint_t *pointer;

while (head != NULL)
{
	pointer = head;
	head = head->next;
	free(pointer);
}
}
