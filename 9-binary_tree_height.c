#include "binary_trees.h"
#include <limits.h>
#include <math.h>

/**
 * binary_tree_height - finds height of a tree
 * @tree: pointer to root node
 * Return: maximum depth(height) or 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t height = 0;
    size_t left_wing;
    size_t right_wing;

    if (!tree)
        return (0);

    height += 1;

    left_wing = binary_tree_height(tree->left);
    right_wing = binary_tree_height(tree->right);
    return (max(left_wing, right_wing));
}
