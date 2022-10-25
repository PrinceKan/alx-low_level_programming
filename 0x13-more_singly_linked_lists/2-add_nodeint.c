#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: double pointer to a structure that contains an integer
 * and a pointer to another node of the same type
 * @n: integer in the struct
 *
 * Return: the adress of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
