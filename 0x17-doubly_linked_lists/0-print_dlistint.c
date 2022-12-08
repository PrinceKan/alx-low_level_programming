#include "lists.h"

/**
 * print_dlistint - all elements of a list printer
 * @h:pointer pointing to the struct.
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int node;

	for (node = 0; h != NULL; node++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
