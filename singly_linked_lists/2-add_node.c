#include "lists.h"





list_t *add_node(list_t **head, const char *str)
{
	unsigned int i; 
	char *stringCopy; /*Declares a variable that will holds the value of str*/
	 list_t *newNode; /*Declares a pointer to a new node*/
         

	 stringCopy = strdup(str); /*Assigns a copy of str to stringCopy*/
	 for (i = 0; stringCopy[i] != '\0'; i++)
	 {
	 }
	 newNode = malloc(sizeof(list_t)); /* Allocates memory for our new node*/
	if (newNode == NULL)
	{
		return (NULL);
	}	
	 newNode->str = stringCopy;
	 newNode->len = i;
	 newNode->next = *head; /*Our new node will now points to the node head points to*/
	 *head = newNode; /*Changes the node head points to, to our new node*/
	 return (newNode);
}


