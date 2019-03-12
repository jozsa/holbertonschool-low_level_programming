#include "binary_trees.h"

/**
 *binary_tree_depth - measure depth of a node in a binary tree
 *@tree: Tree node to be measured for depth
 *
 *Return: Depth of the node in the tree 
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	if (!tree->parent)
		return (0);
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
