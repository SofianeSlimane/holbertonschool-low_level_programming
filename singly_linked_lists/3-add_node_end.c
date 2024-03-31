#include "lists.h"
/**
 * add_node_end - adds node at the end of a list
 * @head: pointer to a pointer head that points to the first node of the list
 * @str: string to be copied in new node
 * Return: the adress of the new element or NULL if it failed
 */



list_t *add_node_end(list_t **head, const char *str)
{
int i;
char *stringCopy;
list_t *newNode;
list_t *pointer;
stringCopy = strdup(str);
for (i = 0; stringCopy[i] != '\0'; i++)
{
}
newNode = malloc(sizeof(list_t));
newNode->str = stringCopy;
newNode->len = i;
newNode->next = NULL;
if (*head == NULL)
{
	*head = newNode;
	return (NULL);
}
pointer = *head;
while (pointer->next != NULL)
{
	pointer = pointer->next;
}
pointer->next = newNode;
return (newNode);
}
