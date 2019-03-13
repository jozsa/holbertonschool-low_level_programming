#include "binary_trees.h"

/**
 *binary_tree_nodes - count number of nodes with >= 1 child node
 *@tree: binary tree to be traversed
 *
 *Return: number of nodes with >= 1 child nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l_size = 0;
	size_t r_size = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	l_size = binary_tree_nodes(tree->left);
	r_size = binary_tree_nodes(tree->right);
		return (l_size + r_size + 1);
}
