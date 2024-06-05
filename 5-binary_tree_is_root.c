#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is root
 * @node: Pointer to node to check
 * Return: 1 if node is root || 0 if node is not a root
 * If node is NULL return 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent == NULL)
		return (1);
	return (0);
}
