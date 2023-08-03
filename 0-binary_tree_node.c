#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - a function to create a binary tree
 * @parent: a pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to new node or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
    	if (newNode == NULL)
    	{
        	return (NULL);
    	}

    	newNode->n = value;
    	newNode->parent = parent;
    	newNode->left = NULL;
    	newNode->right = NULL;

    	return (newNode);
}
