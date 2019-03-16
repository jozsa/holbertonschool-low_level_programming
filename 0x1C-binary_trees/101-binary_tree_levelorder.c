#include "binary_trees.h"

/**
 * enqueue - Implement linked  list queue for level order traversal
 * @head: Head of queue
 * @node: Node to add to queue
 *
 * Return: Pointer to new node added
 */
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
		return (new);
	}
	last = *head;
	while (last->next)
		last = last->next;
	last->next = new;
	return (new);
}

/**
 * dequeue - Pop a node from the queue to print it
 * @head: Queue to pop
 *
 * Return: Pointer to popped node
 */
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

/**
 * binary_tree_levelorder - Traverse binary tree using level order
 * @tree: Tree to traverse
 * @func: Pointer to function to execute while traversing
 *
 * Return: None
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	queue_t *head = NULL;
	binary_tree_t *temp = NULL;

	if (!tree || !func)
		return (NULL);
	enqueue(&head, (binary_tree_t *)tree);
	while (head)
	{
		temp = dequeue(&head);
		func(temp->n);
		if (temp->left)
			enqueue(&head, (binary_tree_t *)temp->left);
		if (temp->right)
			enqueue(&head, (binary_tree_t *)temp->right);
	}
}
