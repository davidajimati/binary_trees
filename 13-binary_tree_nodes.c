#include "binary_trees.h"
size_t node_validator(const binary_tree_t *node);

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node
 * Return: count of nodes with children, NULL if !tree
*/

// size_t binary_tree_nodes(const binary_tree_t *tree)
// {
// 	size_t left, right, count = 0, total;

// 	if (!tree)
// 		return (0);

// 	if (node_validator(tree))
// 		count = 1;

// 	if (tree->left || tree->right)
// 	{
// 		if (tree->left)
// 			left = 1 + binary_tree_nodes(tree->left);
// 		if (tree->right)
// 			right = 1 +  binary_tree_nodes(tree->right);

// 		total = count + left + right;
// 	}
// 	return (total);
// }

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t i = 0, j = 0, total;

	if (node_validator(tree))
		t = 1;
	else
		return (0);

	if (tree->left || tree->right)
	{
		while (tree->left)
		{
			if (node_validator(tree))
				i += 1;
			tree = tree->left;
		}

		while (tree->right)
		{
			if (node_validator(tree))
				j += 1;
			tree = tree->right;
		}

		total = i + j;
	}
	return (total);
}
/**
 * node_validator - checks if nodes are valid and not leaves
 * @node: pointer to root node
 * @Return: 1 if valid, 0 otherwise
*/

size_t node_validator(const binary_tree_t *node)
{
	if (node)
	{
		if (node->left || node->right)
			return (1);
	}
	return (0);
}
