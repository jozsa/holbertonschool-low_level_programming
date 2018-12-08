#include "lists.h"

/**
  * free_dlistint - Free the elements of a doubly linked list
  * @head: The first node of the linked list
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
	free(temp);
}
