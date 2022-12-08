#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list
 * @h: pointer pointing to the struct
 *
 * Return: the number of elements in a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int node_element;

	for (node_element = 0; h != NULL; node_element++)
		h = h->next;
	return (node_element);
}
