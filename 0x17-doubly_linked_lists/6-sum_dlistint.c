#include "lists.h"

/**
 * sum_dlistint - sum of all data of a list
 * @head: head of the list
 *
 * Return: the sum of all data in a list
 */

int sum_dlistint(dlistint_t *head)
{
	int add;

	for (add = 0; head != NULL; head = head->next)
		add = add + head->n;
	return (add);
}
