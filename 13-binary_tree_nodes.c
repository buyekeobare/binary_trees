#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the node
 * @tree: tree to be checked
 * Returns: number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node += ((tree->left || tree->right) ? : 0);
		node = node + binary_tree_nodes(tree->left);
		node = node + binary_tree_nodes(tree->right);
	}
	return (node);
}
