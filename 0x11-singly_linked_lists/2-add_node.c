#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: A pointer to the top of list_t head
 * @str: A pointer to the string to be added to list_t head->str
 *
 * Return: Address of new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int length;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	if (!str)
		length = 0;
	else
	{
		for (length = 0; str && str[length]; length++)
			;
	}
	if (!str)
		new->str = NULL;
	else
		new->str = strdup(str);
	new->len = length;
	new->next = *head;
	*head = new;
	return (new);
}
