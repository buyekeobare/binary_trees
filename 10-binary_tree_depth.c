#include "binary_trees.h"

/**
 * binary_tree_depth - Measures depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth of
 * Return: Depth of the node || 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		d += 1 + binary_tree_depth(tree->parent);
	return (d);
}
