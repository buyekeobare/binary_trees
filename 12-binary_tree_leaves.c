#include "binary_trees.h"
/**
 * binary_tree_leaves - function returns number of leaves
 * @tree; tree to be checked
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, l = 0, r = 0;
	if (tree == NULL)
		return 0;
	if (tree->left == NULL && tree->right == NULL)
		return 1;
	return binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
}
