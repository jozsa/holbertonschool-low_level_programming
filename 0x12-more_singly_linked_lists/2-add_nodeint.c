#include "lists.h"

/**
 * add_nodeint - Adds a node to the beginning of a linked list
 * @head: A pointer to a pointer to a linked list
 * @n: The data/integer to be added to each node
 *
 * Return: A pointer to the address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
