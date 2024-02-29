#include "binary_trees.h"

/**
 * is_full - check if tree is full
 * @tree: tree to check
 * Return: int
 */

int is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((!tree->left && tree->right)
				|| (tree->left && !tree->right)
				|| is_full(tree->left) == 0
				|| is_full(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if full and 0 if otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
		return (is_full(tree));
	return (0);
}
