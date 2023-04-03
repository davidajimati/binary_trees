#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the target tree
 * Description ; it's true if the last node is a leaf node
 * and so, we'll have to check for leaf nodes.
 * Return: 1 if tree is full, 0 otherwise. 0 if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	/* if no node */
	if (!tree)
		return (0);

	/* If it's a leaf node */
	if (!tree->left && !tree->right)
		return (1);

	/* if none of those conditions are met, then we recur */
	if (tree->right && tree->left)
	{
		return ((binary_tree_is_full(tree->left)) &&
				binary_tree_is_full(tree->right));
	}
	return (0);
}
