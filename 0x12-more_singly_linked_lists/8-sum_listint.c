#include "lists.h"

/**
 * sum_listint - Adds all the data of a listint_t linked list
 * @head: A pointer to the linked list
 *
 * Return: The sum of all the data or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
