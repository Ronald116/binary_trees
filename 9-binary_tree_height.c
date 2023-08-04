#include "binary_trees.h"
 /**
  * binary_tree_height - a function that measures the height of a tree
  * @tree: pointer to the root node of the tree to measure the height.
  * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	size_t height_left = binary_tree_height(tree->left);
	size_t height_right = binary_tree_height(tree->right);

	return (height_left > height_right ? height_left + 1 : height_right + 1);
}

