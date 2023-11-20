#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list.
 * @head:  pointer to the lists.
 * Return: sum of all data in the list, 0 if the list is empty.
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *nodee = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
