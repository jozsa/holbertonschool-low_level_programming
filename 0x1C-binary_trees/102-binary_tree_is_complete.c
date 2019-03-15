#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks whether or not a binary tree is complete
 * @tree: The tree to check
 *
 * Return: 1 if it is complete, 0 if not
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->right && !tree->left)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (!(binary_tree_is_complete(tree->left)) &&
			(binary_tree_is_complete(tree->right)))
		return (0);
	if ((binary_tree_is_complete(tree->left) &&
				(binary_tree_is_complete(tree->right))))
		return (1);
	if (binary_tree_is_complete(tree->left) &&
			!(binary_tree_is_complete(tree->right)))
		return (1);
	return (0);
}
