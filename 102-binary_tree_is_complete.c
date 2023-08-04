#include "binary_trees.h"

/**
 * binary_tree_is_complete - function that checks if binary tree is complete
 * @tree: pointer to the root node
 * Return: 0 if tree is NULL
*/

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
	return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left != NULL && !binary_tree_is_complete(tree->left))
	{
		return (0);
	}

	if (tree->right != NULL && !binary_tree_is_complete(tree->right))
	{
		return (0);
	}

	return (1);
}
