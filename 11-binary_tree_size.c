#include "binary_trees.h"
/**
 * binary_tree_size - functun returns the size of tree
 * @tree: tree to be checked
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, lef = 0, r = 0;

	if (tree == NULL)
		return (0);


	lef = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);
	size = lef + r + 1;

	return (size);
}


