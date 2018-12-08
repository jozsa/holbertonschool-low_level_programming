#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of a doubly linked list
 * @head: A pointer to the first node of the doubly linked list
 * @n: The data in the new node
 *
 * Return: Pointer to the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}
