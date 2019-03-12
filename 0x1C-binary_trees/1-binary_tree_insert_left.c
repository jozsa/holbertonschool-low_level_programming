#include <stdio.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	if (parent->left == NULL)
		new_node->left = NULL;
	else
		parent->left->right = new_node;
		new_node->left = parent->left;
	parent->left = new_node;
	new_node->right = parent;
	new_node->n = value;
	new_node->parent = parent;
	return (new_node);
}
