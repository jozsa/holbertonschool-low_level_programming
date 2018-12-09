#include "lists.h"

/**
  * insert_dnodeint_at_index - Insert a node at idx
  * @h: A pointer to the beginning of the doubly linked list
  * @idx: The index to insert the new node at
  * @n: The data to be added to the new node
  *
  * Return: Pointer to the new node
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new;
	dlistint_t *current = *h;
	dlistint_t *end = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || *h == NULL)
		return (NULL);
	while (end->next != NULL)
		end = end->next;
	new->n = n;
	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (new);
	}
	for (count = 0; count < (idx - 1) && current != NULL; count++)
		current = current->next;
	if (count == 0)
	{
		add_dnodeint(h, n);
		return (new);
	}
	else if (current == end)
	{
		add_dnodeint_end(h, n);
		return (new);
	}
	else if (current != NULL)
	{
		new->next = current->next;
		new->prev = current;
		if (current->next != NULL)
			current->next->prev = new;
		current->next = new;
		return (new);
	}
	return (NULL);
}
