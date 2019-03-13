#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert node as right-child of another node
 * @parent: Parent node of node to be inserted
 * @value: Value inside new node
 *
 * Return: New node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right)
	{
		parent->right->parent = new_node;
		new_node->parent = parent;
		new_node->right = parent->right;
		parent->right = new_node;
	}
	else
	{
		parent->right = new_node;
		new_node->parent = parent;
	}
	return (new_node);
}
