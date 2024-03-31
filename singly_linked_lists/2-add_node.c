#include "lists.h"





list_t *add_node(list_t **head, const char *str)
{
	 char *stringCopy; /*Declares a variable that will holds the value of str*/
	 list_t *newNode; /*Declares a pointer to a new node*/
         

	 stringCopy = strdup(str); /*Assigns a copy of str to stringCopy*/
	 newNode = malloc(sizeof(list_t)); /*µAllocates memory for our new nod*/
	 newNode->str = stringCopy;/*Assigns a string value to our new node*/
	 newNode->len = strlen(stringCopy);
	 newNode->next = *head; /*Our new node will now points to the node head points to */
	 *head = newNode; /*Changes the node head points to, to our new node*/
	 return (newNode);
}


