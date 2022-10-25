#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the struct
 * @n: integer in the struct
 * @idx: index of the list where the new node should be added
 *
 * Return: the address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *move = *head;
	unsigned int index;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		index = 0;
		while (index < idx - 1)
		{
			move = move->next;
			index++;
		}

		if (move == NULL)
		{
			free(newNode);
			return (NULL);
		}
	}
		newNode->next = move->next;
		move->next = newNode;

	return (newNode);
}
