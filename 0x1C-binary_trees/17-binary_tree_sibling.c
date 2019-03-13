#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: The node to find the sibling of
 *
 * Return: Pointer to sibling node, NULL if not found
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (!node || !node->parent)
		return (NULL);
	if (node->parent->right && node->parent->left)
	{
		if (node->parent->left->n == node->n)
			sibling = node->parent->right;
		else if (node->parent->right->n == node->n)
			sibling = node->parent->left;
	}
	if (!sibling)
		return (NULL);
	return (sibling);
}
