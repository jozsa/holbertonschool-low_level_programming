#include "lists.h"

/**
 * free_listint - Free all the elements of a linked list
 * @head: A pointer to the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
	free(temp);
}
