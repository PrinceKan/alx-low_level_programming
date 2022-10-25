#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: double pointer to the first node in a list
 * it need to be modified if there isn't any nodes yet
 * @n: integer in the struct
 *
 * Return: a pointer (to another list element)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *point;

	if (&*head == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		point = *head;

		while (point->next != NULL)
		{
			point = point->next;
		}
		point->next = newNode;
	}
	return (*head);
}
