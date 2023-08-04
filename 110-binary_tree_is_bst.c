#include "binary_trees.h"

/**
 * binary_tree_is_bst - function that checks if a binary tree is a
 * valid Binary Search Tree
 * @tree: pointer to the root node
 * Return: 1 if BST otherwise 0
*/

int binary_tree_is_bst(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (1);
	}

	if (!binary_tree_is_bst(tree->left))
	{
		return (0);
	}

	if (!binary_tree_is_bst(tree->right))
	{
		return (0);
	}

	if (tree->left != NULL && tree->left->n >= tree->n)
	{
		return (0);
	}

	if (tree->right != NULL && tree->right->n <= tree->n)
	{
		return (0);
	}

	return (1);
}
