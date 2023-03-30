#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary trees
 *
 * @tree: pointer to the root node
 * Return: number of leaves in the tree or 0 if NULL
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;
	if (tree)
	{
		if (tree->right)
			right = 1 + binary_tree_leaves(tree->right);

		if (tree->left)
			left = 1 + binary_tree_leaves(tree->left);

		if (right >= left)
			return(right);
		return (left);
	}
	return (0);
}
