#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as the
 * right child of another node
 * @parent: pointer to the node to insertthe right-child
 * @value: value to store in the new node
 * Return: pointer to created node or NULL on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nn = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	nn->n = value;
	nn->parent = parent;
	nn->left = NULL;
	nn->right = NULL;

	if (parent == NULL)
	{
		return (nn);
	}

	if (parent->right != NULL)
	{
		nn->right = parent->right;
	parent->right = nn;
	}
	else
	{
		parent->right = nn;
	}

	return (nn);
}
