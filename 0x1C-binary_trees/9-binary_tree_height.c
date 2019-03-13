#include "binary_trees.h"

/**
 *binary_tree_height - measure height of a binary tree
 *@tree: Tree to be measured for height
 *
 *Return: Height of the tree
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (l > r)
		return (l + 1);
	else
		return (r + 1);
}
