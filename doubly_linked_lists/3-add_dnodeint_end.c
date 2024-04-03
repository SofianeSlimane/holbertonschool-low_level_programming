#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of a doubly linked list
 * @head: pointer to pointer head that points to the first node of the lsit
 * @n: const integer to be assigned to newNode
 * Return: newNode
 */



dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *pointer;
dlistint_t *newNode;


newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
{
	return (NULL);
}
newNode->n = n;
newNode->prev = NULL;
newNode->next = NULL;
if (*head == NULL)
{
	*head = newNode;
	return (newNode);
}
pointer = *head;
while (pointer->next != NULL)
{
	pointer = pointer->next;
}
pointer->next = newNode;
newNode->prev = pointer;

return (newNode);
}
