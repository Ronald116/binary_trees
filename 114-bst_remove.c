#include "binary_trees.h"

/**
 * bst_remove - function that removes a node from a Binary Search Tree
 * @root: pointer to the root node of the tree where you will remove a node
 * @value: value to remove
 * Return: pointer to the new root node of the tree after
 * removing the desired value
 */

bst_t *bst_remove(bst_t *root, int value)
{
	if (*tree == NULL)
	{
		*tree = malloc(sizeof(bst_t));

		if (*tree == NULL)
			return (NULL);

		(*tree)->n = value;
		(*tree)->left = NULL;
		(*tree)->right = NULL;
		return (*tree);
	}

	if (value < (*tree)->n)
		return (bst_insert(&((*tree)->left), value));
	else if (value > (*tree)->n)
		return (bst_insert(&((*tree)->right), value));
	else
		return (NULL);
}
