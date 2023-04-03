#include "binary_trees.h"
int confirm(const binary_tree_t *node);

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the target tree
 * Return: 1 if tree is full, 0 otherwise. 0 if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int status;

	if (tree->parent && (!tree->left && !tree->right))
		return (1);

	status = (confirm(tree));
	if (status == 1 && tree)
	{
		status = binary_tree_is_full(tree->left);
		status = binary_tree_is_full(tree->right);
	}
	return (status);
}

/**
 * confirm - checks if a node is full
 * @node: pointer to the target
 * Return: 0 = No, 1 = Yes
 */
int confirm(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left && node->right)
		return (1);
	return (0);
}
