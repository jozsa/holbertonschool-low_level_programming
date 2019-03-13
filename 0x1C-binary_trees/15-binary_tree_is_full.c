#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks whether or not a binary tree is full
 * @tree: The tree to check
 *
 * Return: 0 if it is not full, 1 if it is
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t i, f_size, height, size;

	size = binary_tree_size(tree);
	height = binary_tree_height(tree);

	for (i = 0, f_size = 0; i <= height; i++)
		f_size = (f_size * 2) + 1;
	if (size != f_size)
		return (0);
	return (1);
}

/**
 * binary_tree_height - measure height of a binary tree
 * @tree: Tree to be measured for height
 *
 * Return: Height of the tree
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
/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: The tree to measure
 *
 * Return: The size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_size = 0;
	size_t r_size = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);
	return (l_size + r_size + 1);
}
