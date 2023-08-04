#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree ==  NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	int full_l = binary_tree_is_full(tree->left);
	int full_r = binary_tree_is_full(tree->right);

	return ((full_l && full_r) || (!full_l && !full_r));
}
