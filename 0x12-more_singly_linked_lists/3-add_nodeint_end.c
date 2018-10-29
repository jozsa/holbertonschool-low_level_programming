#include "lists.h"

/**
 * add_nodeint_end - Add a node to the end of a linked list
 * @head: A pointer to a pointer to each node of the linked list
 * @n: The data/integer to be added to each node
 *
 * Return: A pointer to the new node of the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (new);
}
