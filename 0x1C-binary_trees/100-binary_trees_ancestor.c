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
	if (!first || !second)
		return (NULL);
	else if (first == second)
		return ((binary_tree_t *)first);
	else if (first->parent == second)
		return ((binary_tree_t *)second);
	else if (!first->parent && !second->parent)
		return (NULL);
	else if (first == second->parent)
		return ((binary_tree_t *)first);
	else if (first->parent && second->parent)
		return (binary_trees_ancestor(first->parent, second->parent));
	else if (!first->parent)
		return (binary_trees_ancestor(first, second->parent));
	return (binary_trees_ancestor(first->parent, second));
}
