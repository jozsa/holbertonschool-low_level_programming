#include "lists.h"

/**
 * dlistint_len - Return the number of elements in a doubly linked list
 * @h: The first node of the doubly linked list
 *
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}

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
	dlistint_t *temp = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || *h == NULL)
		return (NULL);
	new->n = n;
	count = dlistint_len(*h);
	if (idx > count)
		return (NULL);
	for (count = 0; count < (idx - 1); count++)
		temp = temp->next;
	new->next = temp->next;
	temp->next = new;
	new->prev = temp->prev;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
