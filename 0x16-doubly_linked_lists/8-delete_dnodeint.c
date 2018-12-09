#include "lists.h"

/**
  * delete_dnodeint_at_index - Delete node @ given index of doubly linked list
  * @head: Pointer to the first node of the doubly linked list
  * @index: The index to delete the node at
  *
  *
  * Return: 1 if success, -1 upon failure
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *next;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (count = 0; current != NULL && count < (index - 1); count++)
		current = current->next;
	if (current == NULL || current->next == NULL)
		return (-1);
	next = current->next->next;
	free(current->next);
	current->next = next;
	return (1);
}
