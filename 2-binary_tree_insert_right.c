#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: pointer to the node to insert the left-child
 * @value:  value to store in the new node
 * Return: pointer to the new node or NULL if mem. allocation fails.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *reset;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		reset = parent->left;
		parent->left = new_node;
		new_node->left = reset;
	}
	else
		new_node->left = NULL;

	return (new_node);
}
