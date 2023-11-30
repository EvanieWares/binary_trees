#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node) /* checks if node is not NULL*/
	{
		if (!node->parent) /* checks if parent is NULL*/
		{
			return (1);
		}
	}

	return (0);
}
