#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at index index
 * @head: A pointer to a pointer to the beginning of a linked list
 * @index: The index to delete the node at
 *
 * Return: 1 if success, -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next;
	unsigned int count;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (count = 0; temp != NULL && count < (index - 1); count++)
		temp = temp->next;
	if (temp == NULL || temp->next == NULL)
		return (-1);
	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}
