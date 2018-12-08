#include "lists.h"

/**
  * get_dnodeint_at_index - Get nth node of a doubly linked list
  * @head: The first node of the doubly linked list
  * @index: The index of the nth node to be returned
  *
  * Return: The nth node
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	for (count = 0; count < index; count++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
