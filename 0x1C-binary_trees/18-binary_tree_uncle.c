#include "binary_trees.h"

/**
 * find_sibling - Find sibling of a node
 * @node: Node to find sibling of
 *
 * Return: Pointer to sibling node, NULL if not found
 */

binary_tree_t *find_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left && node->parent->right)
	{
		if (node->parent->left->n == node->n)
			sibling = node->parent->right;
		else if (node->parent->right->n == node->n)
			sibling = node->parent->left;
	}
	return (sibling);
}

/**
 * binary_tree_uncle - Find the uncle of a node in a binary tree
 * @node: Node to find uncle of
 *
 * Return: Pointer to uncle node, NULL if not found
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *aunt = NULL;

	if (!node || !node->parent) 
		return (NULL);
	aunt = find_sibling(node->parent);
	return (aunt);
}
