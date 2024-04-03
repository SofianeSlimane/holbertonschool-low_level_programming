#include "lists.h"
/**
 * sum_dlistint - calculates sum of integer of each node
 * @head: pointer to first node of the list
 * Return: sum of integer data of each nodes
 */



int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
	{
		return (0);
	}
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
