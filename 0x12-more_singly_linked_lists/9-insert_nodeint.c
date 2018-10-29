#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new list node at index idx
 * @head: A pointer to a pointer to the beginning of the linked list
 * @idx: The index to add the new node to
 * @n: The data to insert
 *
 * Return: The address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *current = *head;
	unsigned int count;

	if (new == NULL)
		return (NULL);
	new->n = n;
	for (count = 0; count < (idx - 1); count++)
		current = current->next;
	new->next = current->next;
	current->next = new;
	return (new);
}
