#include "binary_trees.h"
#include <limits.h>

/**
 * is_avl_tree - function that checks if a binary tree is a valid AVL Tree
 * @tree: pointer to the root node
 * Return: 1 if AVL tree otherwise 0
 */

int is_avl_tree(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	int left_height = height(tree->left);
	int right_height = height(tree->right);

	if (abs(left_height - right_height) > 1)
		return (0);

	return (is_avl_tree(tree->left) && is_avl_tree(tree->right));
}



/**
 * binary_tree_is_avl - Checks if a binary tree is a valid AVL Tree
 * @tree: Pointer to the root node of the tree
 * Return: 1 if AVL Tree, 0 otherwise
 */

int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_bst(tree, INT_MIN, INT_MAX) && is_avl_tree(tree));
}


/**
 * is_bst - Checks if the tree is a valid Binary Search Tree (BST)
 * @tree: Pointer to the root node of the tree
 * @min: Minimum value allowed in the tree
 * @max: Maximum value allowed in the tree
 * Return: 1 if BST, 0 otherwise
 */

int is_bst(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);

	return (is_bst(tree->left, min, tree->n)
			&& is_bst(tree->right, tree->n, max));
}


/**
 * height - Returns the height of the binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree
 */

int height(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (-1);

	int left_height = height(tree->left);
	int right_height = height(tree->right);

	return (max(left_height, right_height) + 1);
}


/**
 * max - Returns the maximum of two integers
 * @a: First integer
 * @b: Second integer
 * Return: Maximum of a and b
 */

int max(int a, int b)
{
	return ((a > b) ? a : b);
}
