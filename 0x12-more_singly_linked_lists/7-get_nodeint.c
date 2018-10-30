#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node of a linked list at index
 * @head: A pointer to the first node of a linked list
 * @index: The nth node to be returned
 *
 * Return: The node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	if (!head)
		return (NULL);
	for (count = 0; count < index; count++)
	{
		if (head)
		{
			head = head->next;
			break;
		}
	}
	return (head);
}
