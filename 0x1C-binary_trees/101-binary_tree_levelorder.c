#include "binary_trees.h"

queue_t *enqueue(queue_t **head, binary_tree_t *node)
{
	queue_t *new, *last;

	new = malloc(sizeof(queue_t));
	if (!new)
		return (NULL);
	new->node = node;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (last->next)
		last = last->next;
	last->next = new;
	return (new);
}

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	queue_t *head = NULL;
	(void)func;

	enqueue(&head, (binary_tree_t *)tree);
}
