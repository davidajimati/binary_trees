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
	/**
	 * get the height of the tree
	 * get the size of the tree
	 * use formula (2^height) - 1
	 * compare the 2, if same, then 1. else 0
	*/
}
