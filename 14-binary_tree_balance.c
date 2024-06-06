#include "binary_trees.h"

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: Tree to be checked
 * Return: 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (!tree)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	return (l_height - r_height);
}

/**
 * binary_tree_height - Measures height of a binary tree for a balanced tree
 * @tree: tree to be checked
 * Return: Height of the tree, or 0 on failure
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0;
	size_t r_height = 0;

	if (!tree)
		return (0);

	l_height += 1 + binary_tree_height(tree->left);
	r_height += 1 + binary_tree_height(tree->right);

	if (l_height > r_theight)
		return (l_height);
	else
		return (r_height);
}
