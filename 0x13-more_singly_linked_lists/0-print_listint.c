#include "lists.h"

/**
 * print_listint - this function prints all the elements of a list
 * @h: the pointer that points to the struct
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int counter;

	for (counter = 0 ; h != 0 ; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
