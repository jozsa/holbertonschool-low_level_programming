#include "binary_trees.h"

/**
 * binary_tree_postorder - Use Post Order Traversal for binary tree
 * @tree: Binary tree to be traversed
 * @func: Function to be called on each node
 *
 * Return: None
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
