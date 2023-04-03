#include "binary_trees.h"
int check_level(const binary_tree_t *node, int level, int *control);
int is_full(const binary_tree_t *node);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to target tree
 * Description: A perfect binary tree is a binary tree
 *	in which all interior nodes have two children and
 *	all leaves have the same depth or same level
 * Return: 0 if tree is NULL. 1 if tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, f, level = 0, *control = 0;

	/* check if tree is NULL */
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	/* check if tree has equal length on all sides*/
	l = check_level(tree, level, control);

	/* check if tree ends with a leaf node (full?) */
	f = is_full(tree);

	/* returns 1 if the 2 conditions above are true */
	if (l == 1 && f == 1)
		return (1);

	/* if no condition is met, function recurs */
	if (tree->left || tree->right)
	{
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);
}

/**
 * check_level - checks if the length of the tree is equal on all sides
 * @node: pointer to target tree
 * Return: 1 if length is same, 0 otherwise, 0 if node is NULL
 */
int check_level(const binary_tree_t *node, int level, int *control)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
	{
		if (*control == 0)
			*control = level;

		else
		{
			if (*control != level)
				return (0);
			else
				return (1);
		}
	}

	return (((check_level(node->left, level + 1, control) &&
		(check_level(node->right, level + 1, control)))));
}

/**
 * is_full - check if all nodes are full and ands with a leaf node
 * @node: pointer to target tree
 * Return: 1 if tree is full, 0 otherwise, 0 if node is NULL
 */

int is_full(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
		return (1);

	if (node->right && node->left)
	{
		return ((is_full(node->left)) &&
				is_full(node->right));
	}
	return (0);
}
