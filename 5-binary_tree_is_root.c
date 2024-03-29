#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: pointer to node to check
 *
 * Return: 1 if node is a root or 0 if otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (node->parent)
			return (0);
		return (1);
	}
	return (0);
}
