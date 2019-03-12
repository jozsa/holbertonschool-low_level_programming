#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse binary tree nodes using preorder
 * @tree: Binary tree to be traversed
 * @func: Function to be called on each node
 *
 * Return: None
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
