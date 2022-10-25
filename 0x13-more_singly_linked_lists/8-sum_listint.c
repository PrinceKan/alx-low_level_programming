#include "lists.h"

/**
 * sum_listint - sum of all data of a linked list
 * @head: pointer to the struct
 *
 * Return: sum of all data in a linked list
 */

int sum_listint(listint_t *head)
{
	int append;

	for (append = 0 ; head != NULL ;)
	{
		append = append + head->n;
		head = head->next;
	}
	return (append);
}
