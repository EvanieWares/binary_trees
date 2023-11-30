#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree)
	{
		if (tree->left)
		{
			left = binary_tree_height(tree->left) + 1;
		}
		if (tree->right)
		{
			right = binary_tree_height(tree->right) + 1;
		}

		return ((left > right) ? left : right);
	}

	return (0);
}
