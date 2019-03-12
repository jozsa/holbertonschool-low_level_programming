#include "binary_trees.h"

/**
 *binary_tree_is_root - check if node is the root of binary tree
 *@node: node to be checked if parent
 *
 *Return: 1 True, 0 else.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
