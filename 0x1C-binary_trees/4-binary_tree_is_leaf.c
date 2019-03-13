#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf (no children)
 * @node: The node to check
 *
 * Return: 0 if node is not a leaf, 1 if node is a leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
