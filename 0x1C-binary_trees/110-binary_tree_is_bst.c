#include "binary_trees.h"
#include <limits.h>

/**
 * binary_tree_is_bst - Checks if a binary tree is BST
 * @tree: The tree to check
 *
 * Return: 1 if tree is BST, 0 if not
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if (tree->left && tree->left->n > tree->n)
		return (0);
	if (tree->right && tree->n > tree->right->n)
		return (0);
	if (binary_tree_is_bst(tree->left) && binary_tree_is_bst(tree->right))
		return (1);
	return (0);
}
