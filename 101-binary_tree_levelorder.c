#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary tree using
 * in-order traversal
 * @tree: function that goes through a binary tree using in-order traversal.
 * @func: pointer to a function to call for each node.
 *
 * Return: nothing.
 */


void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree)
	{
		func(tree->n);
		binary_tree_levelorder(tree->left, func);
		binary_tree_levelorder(tree->right, func);
	}
}
