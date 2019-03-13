#include "binary_trees.h"

/**
 * find_height - finds the height of a binary tree
 * @tree: The tree to be measured
 *
 * Return: The height of the tree
 */
int find_height(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (!tree)
		return (0);
	left_height = find_height(tree->left);
	right_height = find_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}

/**
 * binary_tree_balance - Measures balance factor of binary tree
 * @tree: Binary tree to be measured
 *
 * Return: Balance factor of the binary tree passed
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor = 0;

	if (!tree)
		return (0);
	balance_factor = find_height(tree->left) - find_height(tree->right);
	return (balance_factor);
}
