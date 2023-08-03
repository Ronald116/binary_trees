#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts
 *                          a node as the left-child
 *                          of another node
 * @parent: pointer to the node to insert left-child
 * @value: value to store in the new node
 * Return: pointer to created node or NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nn = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	nn->parent = parent;
	nn->n = value;
	nn->right = NULL;

	if (parent == NULL)
	{
	return (nn);
	}

	if (parent->left != NULL)
	{
	nn->left = parent->left;
	parent->left = nn;
	}
	else
	{
	parent->left = nn;
	}
	return (nn);
}
