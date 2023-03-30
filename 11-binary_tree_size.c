#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root node
 * Return: tree size or 0 if tree NULL
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree)
	{
		size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
		return (size);
	}
	return (0);
}
