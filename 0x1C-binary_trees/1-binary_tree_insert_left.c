#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert node as left-child of another node
 * @parent: Parent node of node to be inserted
 * @value: Value inside new node
 *
 * Return: New node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;
	if (parent->left)
	{
		parent->left->parent = new_node;
		new_node->parent = parent;
		new_node->left = parent->left;
		parent->left = new_node;
	}
	else
	{
		parent->left = new_node;
		new_node->parent = parent;
	}
	return (new_node);
}
