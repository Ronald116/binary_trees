#include "binary_trees.h"

/**
 * binary_tree_rotate_right - function that performs right rotation
 * on binary tree
 * @tree: pointer to the root node
 * Return: pointer to the new root node once rotated
*/

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (tree == NULL || tree->left == NULL)
	{
		return (NULL);
	}

	binary_tree_t *left_child = tree->left;

	tree->left = left_child->right;

	left_child->left = tree;

	return (left_child);
}
