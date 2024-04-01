#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a singly linked list
 * @head: a pointer to a pointer head that points to the first node of the list
 * @str: string to be copied in new node
 * Return: the adress of the new node
 */




list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *newNode;/*Declares a pointer to a new node*/

	if (str == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(list_t));/* Allocates memory for our new node*/
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	for (i = 0; newNode->str[i] != '\0'; i++)
	{
	}
	newNode->len = i;
	newNode->next = *head;/*node will now points to the node head points to*/
	*head = newNode;/*Changes the node head points to, to our new node*/
	return (newNode);
}
