#include "lists.h"

/**
 * free_listint2 - Free all the elements of a linked list
 * @head: A pointer to the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		free(temp);
		*head = (*head)->next;
	}
	head = NULL;
}
