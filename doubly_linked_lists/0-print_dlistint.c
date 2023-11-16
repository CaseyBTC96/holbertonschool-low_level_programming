#include "lists.h"

/**
 * print_dlistint - prints all the elements of  a dlistint_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
size_t print_dlisstint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		printf("%i\n", node->);
		cont++;
		node  = node->next;
	}

	return (cont);
}
