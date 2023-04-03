#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
int size_calculator(int y);

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
	/**
	 * get the height of the tree
	 * get the size of the tree
	 * use formula (2^height) - 1
	 * compare the 2, if same, then 1. else 0
	 */

	int height, size, calc_size;

	if (!tree)
		return (0);
	height = (int)binary_tree_height(tree) + 1;
	size = (int)binary_tree_size(tree);
	calc_size = size_calculator(height);

	if (calc_size == size)
		return (1);
	return (0);
}

/**
 * size_calculator - calculates the size of a binary tree using the height
 * @y: height of tree
 * Return: tree size OR 0 if height is less than zero
 */
int size_calculator(int y)
{
	int i, ans = 1;

	if (y < 0)
		return (0);

	for (i = 0; i < y; i++)
		ans *= 2;
	return (ans - 1);
}

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
		left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return (left > right ? left : right);
	}
	return (0);
}
