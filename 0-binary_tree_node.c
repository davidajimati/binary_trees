#include "binary_trees.h"

/**
 * binary_tree_node -function to create a new binary tree node
 *
 * @parent: pointer to parent node
 * @value: value in the parent node
 * Return: pointer to the new node or NUL: if impossible
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr;

	ptr = malloc(sizeof(binary_tree_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = value;
	ptr->parent = parent;
	ptr->left = NULL;
	ptr->right = NULL;

	return (ptr);
}
