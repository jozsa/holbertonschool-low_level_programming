#include "binary_trees.h"

/**
 * find_height 
 *
 * Return
 */

int find_height(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;

	if (!tree)
		return 0;
	if (!tree->left && !tree->right)
		return 0;
	l = find_height(tree->left);
	r = find_height(tree->right);
	if (l > r)
		return (l + 1);
	else
		return (r + 1);
}
/**
 * count_leaves -
 *
 * Return:
 */

int count_leaves(const binary_tree_t *tree)
{
	int leaves = 0;
	
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	leaves += count_leaves(tree->left);
	leaves += count_leaves(tree->right);
	return (leaves);
}

/**
 * binary_tree_is_perfect -
 *
 * Return:
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leaf_count = 0;
	int perfect_leaves = 1;
	int i;
	int height = find_height(tree);

	if (!tree)
		return (0);
	leaf_count = count_leaves(tree);
	for (i = 1; i <= height; i++)
		perfect_leaves *= 2;
	if (perfect_leaves != leaf_count)
		return (0);
	return (1);
}
