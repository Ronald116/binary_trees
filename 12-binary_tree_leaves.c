#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: If tree is NULL, the function must return 0
 * A NULL pointer is not a leaf
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	size_t left_leaves = 0;
	size_t right_leaves = 0;

	right_leaves = binary_tree_leaves(tree->right);
	left_leaves = binary_tree_leaves(tree->left);

	return (right_leaves + left_leaves);
}

