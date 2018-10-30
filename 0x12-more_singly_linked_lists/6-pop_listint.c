#include "lists.h"

/**
 * pop_listint - Removes the first node of a linked list
 * @head: A pointer to a pointer to the first node
 *
 * Return: The data in the removed node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int storage = ((*head)->n);

	if (!head || head == NULL)
		return (0);
	free(temp);
	*head = (*head)->next;
	return (storage);
}
