#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks whether or not a binary tree is full
 * @tree: The tree to check
 *
 * Return: 0 if it is not full, 1 if it is
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if ((binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right)))
		return (1);
	return (0);
}
