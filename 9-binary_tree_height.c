#include "binary_trees.h"

/**
 * binary_tree_height - Measures height of a binary tree
 * @tree: Pointer to root node
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0;
	size_t r_height = 0;

	if (!tree)
		return (0);

	if (tree->left)
		l_height += 1 + binary_tree_height(tree->left);

	if (tree->right)
		r_height += 1 + binary_tree_height(tree->right);

	if (l_height > r_height)
		return (l_height);
	else
		return (r_height);
}
