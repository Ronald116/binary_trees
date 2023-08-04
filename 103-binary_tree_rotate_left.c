#include "binary_trees.h"

/**
 * binary_tree_rotate_left - function that performs right rotation
 * on binary tree
 * @tree: pointer to the root node
 * return: pointer to the new root node once rotated
*/

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree == NULL || tree->right == NULL)
	{
		return (NULL);
	}

	binary_tree_t *right_child = tree->right;

	tree->right = right_child->left;

	right_child->left = tree;

	return (right_child);
}
