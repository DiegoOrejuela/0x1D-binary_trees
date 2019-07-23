#include "binary_trees.h"

/**
 * binary_tree_height - return the height of a node
 * @tree: pointer to binary tree
 *
 * Return: return the height of a node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left && tree->right)
		return (2);
	else if (tree->left || tree->right)
		return (1);
	else
		return (0);

}
