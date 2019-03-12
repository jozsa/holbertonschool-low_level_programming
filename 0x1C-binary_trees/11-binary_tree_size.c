#include "binary_trees.h"

/**
 *binary_tree_size - 
 *
 *
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_size = 0;
	size_t r_size = 0;

	if (!tree)
		return 0;
	if (!tree->left && !tree->right)
		return 1;
	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);
	return (l_size + r_size + 1);
}
