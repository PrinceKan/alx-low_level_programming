#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a linked list
 * @head: pointer to the struct
 * @index: index of the node
 *
 * Return: the nth node of a linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int checker;

	for (checker = 0 ; head != NULL ; checker++)
	{
		if (checker == index)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
