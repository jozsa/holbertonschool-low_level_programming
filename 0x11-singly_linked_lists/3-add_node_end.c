#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: A pointer to the first element of list_t head
 * @str: A pointer to the string to be added to the last element of list_t
 *
 * Return: Address of new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int length;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	last = *head;
	if (str != NULL)
	{
		for (length = 0; str && str[length]; length++)
			;
		new->str = strdup(str);
	}
	else
		new->str = NULL;
	new->len = length;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (new);
}
