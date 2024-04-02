#include "lists.h"
/**
 * add_dnodeint - add a node at the beginning of a list
 * @head: pointer to pointer head that points to first node of the list
 * @n: integer data in node
 * Return: new node created
 */



dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
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


	newNode->next = *head;
	(*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}
