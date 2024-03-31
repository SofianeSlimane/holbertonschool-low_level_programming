#include "lists.h"




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
 pointer = *head;
 while (pointer->next != NULL)
 {
	 pointer = pointer->next;
 }
 pointer->next = newNode;
 return (newNode);
}

 
