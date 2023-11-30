#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree
 * @tree: Pointer to the root node of the tree to measure the depth
 *
 * Return: Depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		return (tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
	}

	return (0);
}
