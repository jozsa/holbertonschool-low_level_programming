#include "binary_trees.h"

/**
 *binary_trees_ancestor - find lowest common ancestor of two nodes
 *@first: node with which to find common ancestor
 *@second: node with which to find common ancestor
 *
 *Return: Common ancestory of first and second nodes, Null if none found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const
binary_tree_t *second)
{
	binary_tree_t *f;
	binary_tree_t *s;

	if (!first || !second)
		return (NULL);
	else if (first == second)
	{
		f = (binary_tree_t *)first;
		return (f);
	}
	else if (first->parent == second)
	{
		s = (binary_tree_t *)second;
		return (s);
	}
	else if (first == second->parent)
	{
		f = (binary_tree_t *)first;
		return (f);
	}
	return (binary_trees_ancestor(first->parent, second->parent));
}
