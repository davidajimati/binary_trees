#include "binary_trees.h"

size_t max(size_t one, size_t two);
/**
 * binary_tree_height - finds height of a tree
 * @tree: pointer to root node
 * Return: maximum depth(height) or 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree)
	{
		if (tree->left)
			left = 1 + binary_tree_height(tree->left);

		if (tree->right)
			right = 1 + binary_tree_height(tree->right);

		if (left >= right)
			return (left);
		return (right);
	}
	return (0);
}
