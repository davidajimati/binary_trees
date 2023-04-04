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
	binary_tree_t *lca_f, *lca_s;

	if (!first || !second)
		return (NULL);

	if (first->parent == second)
		return (second);
	if (second->parent == first)
		return (first);

	while (first->parent)
	{
		lca_f = first->parent;

		while (second->parent)
		{
			lca_s = second->parent;
			if (lca_f == lca_s)
				return (lca_s);
			second = second->parent;
		}
		first = first->parent;
	}
	return (NULL);
}
