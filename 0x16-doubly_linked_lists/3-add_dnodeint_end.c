#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a doubly linked list
 * @head: A pointer to the beginning of the doubly linked list
 * @n: The data to be added to the new node
 *
 * Return: Pointer to new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *end = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if ((*head) == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (end->next != NULL)
		end = end->next;
	end->next = new;
	new->prev = end;
	return (new);
}
