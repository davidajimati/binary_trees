#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: subject node
 * Return: Pointer to the uncle of the subject node
 *			NULL is node is NULL
 *			NULL is node has no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grand_par, *uncle;

	if (!node)
		return (NULL);
	parent = node->parent;
	if (!parent)
		return (NULL);
	grand_par = parent->parent;
	if (!grand_par)
		return (NULL);
	if (grand_par->left == parent)
		uncle = grand_par->right;
	else
		uncle = grand_par->left;

	return (uncle);
}
