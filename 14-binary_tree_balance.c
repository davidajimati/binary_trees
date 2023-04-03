#include "binary_trees.h"
size_t node_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures balance factor of binary tree
 * @tree: pointer to the target node
 * Return: The balance factor, or 0 if !tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = node_height(tree->left);
	right = node_height(tree->right);
	return (left - right);
}

/**
 * node_height - finds height of a node
 * @node: pointer to root node
 * Return: maximum depth(height) or 0 if node is NULL
 */

size_t node_height(const binary_tree_t *node)
{
	size_t left = 0, right = 0;

	if (!node)
		return (0);

	if (node)
	{
		left = 1 + node_height(node->left);
		right = 1 + node_height(node->right);

		if (left >= right)
			return ((int)left);
		return ((int)right);
	}
	return (0);
}
