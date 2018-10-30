#include "lists.h"

/**
 * free_listint2 - Free all the elements of a linked list
 * @head: A pointer to the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	if (*head == NULL)
		return;
	while (temp != NULL)
	{
		temp = temp->next;
		free(temp);
	}
	free(*head);
	*head = NULL;
}
