#include "lists.h"




size_t print_list(const list_t *h)
{       
	int i;
	size_t numberOfNodes;
	const list_t *pointer;
	pointer = malloc(sizeof(const list_t));
	pointer = h;
	if (pointer->str == NULL)
	{
		printf("[0] (nil)");
		
	}
        for (i = 0; pointer != NULL; i++)
	{
		printf("[%u] %s\n", pointer->len, pointer->str);
		
		pointer = pointer->next;
		numberOfNodes++;
		
		
	}
	
	return (numberOfNodes);
}
