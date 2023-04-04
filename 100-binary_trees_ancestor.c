#include "binary_trees.h"
size_t binary_tree_depth(const binary_tree_t *tree);

/**
 * binary_trees_ancestor - finds the lowest common ancestor of 2 nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to the lowest common ancestor, NULL if no ancestor found.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	size_t depth_f, depth_s;

	if (!first || !second)
		return (NULL);
	depth_f = binary_tree_depth(first);
	depth_s = binary_tree_depth(second);

	while (depth_f > depth_s)
	{
		first = first->parent;
		depth_f--;
	}

	while (depth_s > depth_f)
	{
		second = second->parent;
		depth_s--;
	}

	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
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
