#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	int left_perfect = binary_tree_is_perfect(tree->left);
	int right_perfect = binary_tree_is_perfect(tree->right);

	return ((left_perfect && right_perfect));
}
