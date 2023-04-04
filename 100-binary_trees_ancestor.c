#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of 2 nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to the lowest common ancestor, NULL if no ancestor found.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	const binary_tree_t *lca_f, *lca_s, *lca;

	if (!first || !second)
		return (NULL);

	if (first->parent == second)
		return (binary_tree_t *)second;
	if (second->parent == first)
		return (binary_tree_t *)first;

	while (first->parent)
	{
		lca_f = first;
		while (second->parent)
		{
			lca_s = second;
			if (lca_f == lca_s)
			{
				lca = lca_f;
				return (binary_tree_t *)lca;
			}
			second = second->parent;
		}
		first = first->parent;
	}
	return (NULL);
}
