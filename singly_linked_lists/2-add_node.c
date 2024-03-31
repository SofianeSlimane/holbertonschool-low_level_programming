#include "lists.h"





list_t *add_node(list_t **head, const char *str)
{
	const char *copyString;
	copyString = strdup(str);
	list_t *pointer =

