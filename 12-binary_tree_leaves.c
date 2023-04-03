#include "binary_trees.h"

size_t leaf_check(const binary_tree_t *node);

/**
 * binary_tree_leaves - counts the leaves in a binary trees
 *
 * @tree: pointer to the root node
 * Return: number of leaves in the tree or 0 if NULL
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (!tree)
		return (0);

	if (leaf_check(tree))
		return (1);

	if (tree)
	{
		if (tree->left)
			left = binary_tree_leaves(tree->left);

		if (tree->right)
			right = binary_tree_leaves(tree->right);
	}
	return (left + right);
}


/**
 * leaf_check - checks if a node is a leaf
 * @node: target to be checked
 * Return: 1 if leaf, otherwise 0
*/

size_t leaf_check(const binary_tree_t *node)
{
	if (node)
	{
		if (node->left == NULL && node->right == NULL)
			return (1);
	}
	return (0);
}
