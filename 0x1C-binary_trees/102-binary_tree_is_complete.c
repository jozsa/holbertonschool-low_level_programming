#include "binary_trees.h"

/**
 *
 *
 *
 *
 *
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->right && !tree->left)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (!(binary_tree_is_complete(tree->left)) && (binary_tree_is_complete(tree->right)))
		return (0);
	if ((binary_tree_is_complete(tree->left) && (binary_tree_is_complete(tree->right))))
		return (1);
	if (binary_tree_is_complete(tree->left) && !(binary_tree_is_complete(tree->right)))
		return (1);
	return (0);
}
