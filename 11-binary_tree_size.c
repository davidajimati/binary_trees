#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root node
 * Return: tree size or 0 if tree NULL
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t depth, ans = 2, repl;

	depth = binary_tree_depth(tree);

	repl = depth;
	while (repl > 0)
	{
		ans *= depth;
		repl -= 1;
	}
	return (0);
}


/**
 * binary_tree_depth -  measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of tree or 0 if tree is NULL
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree)
	{
		if (tree->parent)
			depth = 1 + binary_tree_depth(tree->parent);

		return (depth);

	}
	return (0);
}
