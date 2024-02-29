#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return ((int)(binary_tree_height(tree->left)
				- binary_tree_height(tree->right)));
	return (0);
}

/**
 * binary_tree_height - heights of a binary tree
 * @tree: the pointer
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0, rheight = 0;

	if (tree)
	{
		lheight = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rheight = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((lheight < rheight) ? rheight : lheight);
	}
	return (0);
}
