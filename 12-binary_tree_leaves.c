#include "binary_trees.h"
/**
 * binary_tree_leaves - Function that returns number of leaves
 * @tree; Tree to be checked
 * Return: Number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_l, leaves_r;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leaves_l = binary_tree_leaves(tree->left);
	leaves_r = binary_tree_leaves(tree->right);

	return (leaves_l + leaves_r);
}

