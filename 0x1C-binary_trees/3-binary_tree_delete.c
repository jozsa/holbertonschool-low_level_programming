#include "binary_trees.h"

/**
 *binary_tree_delete - Delete an entire binary tree
 *@tree: Binary tree to be deleted
 *
 *Return: Void.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *tmp;

	tmp = tree;
	/*end condition for recursion*/
	if ((tree->left == NULL) && (tree->right == NULL))
	{
		if (tree->parent != NULL)
		{
			tmp = tree->parent;
			free(tree);
			if (tmp->left == NULL)
				tree->right = NULL;
			else
				tree->left = NULL;
			binary_tree_delete(tmp);
		}
		else
			free(tree);
	}
	/*move left*/
	else if (tree->left != NULL)
	{
		tree = tree->left;
		if (tree->right != NULL)
		{
			tree = tree->right;
			binary_tree_delete(tree);
		}
		else if (tree->left == NULL)
		{
			tree = tree->parent;
			free(tree->left);
			tree->left = NULL;
			binary_tree_delete(tree);
		}
	}
	/*move right*/
	else if (tree->right != NULL)
	{
		tree = tree->right;
		if (tree->left != NULL)
		{
			tree = tree->left;
			binary_tree_delete(tree);
		}
		else if (tree->right == NULL)
		{
			tree = tree->parent;
			free(tree->right);
			tree->right = NULL;
			binary_tree_delete(tree);
		}
	}
}
