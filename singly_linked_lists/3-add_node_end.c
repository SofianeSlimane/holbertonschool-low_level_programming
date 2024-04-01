#include "lists.h"
/**
 * add_node_end - adds node at the end of a list
 * @head: pointer to a pointer head that points to the first node of the list
 * @str: string to be copied in new node
 * Return: the adress of the new element or NULL if it failed
 */



list_t *add_node_end(list_t **head, const char *str)
{
unsigned int i;
list_t *newNode;
list_t *pointer;

if (str == NULL)
{
	return (NULL);
}
newNode = malloc(sizeof(list_t));
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
return (newNode);
}
