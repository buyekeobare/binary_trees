#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to node to check
 * Return: 1 if node is a leaf || 0 if node not a leaf
 * If node is NULL return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
