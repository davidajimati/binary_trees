#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node whose sibling we must find
 * Return: A pointer to the sibling node
 *			NULL if node or Parent is NULL
 *			NULL is node has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *par, *sib;

	if (!node)
		return (NULL);

	par = node->parent;
	if (!par)
		return (NULL);

	if (par->left == node)
		sib = par->right;
	else
		sib = par->left;
	return (sib);
}
