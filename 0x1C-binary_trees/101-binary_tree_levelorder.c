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

binary_tree_t *dequeue(queue_t **head)
{
	queue_t *temp = *head;
	binary_tree_t *storage = (*head)->node;

	if (!head || !*head)
		return (NULL);
	free(temp);
	*head = (*head)->next;
	return (storage);
}
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	queue_t *head = NULL;
	binary_tree_t *temp = NULL;
	(void)func;

	enqueue(&head, (binary_tree_t *)tree);
	printf("tree->n is: %d\n", head->node->n);
	temp = dequeue(&head);
	func(temp->n);
	if (head)
		printf("node->n is: %d\n", head->node->n);
	enqueue(&head, (binary_tree_t *)tree->left);
	printf("tree->left->n is: %d\n", head->node->n);
	temp = dequeue(&head);
	func(temp->n);
	enqueue(&head, (binary_tree_t *)tree->right);
	printf("tree->right->n is: %d\n", head->node->n);
	temp = dequeue(&head);
	func(temp->n);
}
