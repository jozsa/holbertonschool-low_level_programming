#include "lists.h"

/**
  * sum_dlistint - Return the sum of all data in a doubly linked list
  * @head: The first node of the doubly linked list
  *
  * Return: The sum
  */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		total += temp->n;
		temp = temp->next;
	}
	return (total);
}
