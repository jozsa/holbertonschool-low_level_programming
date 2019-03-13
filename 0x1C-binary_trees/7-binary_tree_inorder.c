#include "binary_trees.h"

/**
 *binary_tree_inorder - perform function on nodes in a binary tree
 *@tree: binary tree to be traversed
 *@func: the function to be called on each node
 *
 *Return: Void.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
