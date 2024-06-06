#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the node
 * @tree: tree to be checked
 * Return: number of nodes with children
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		return (binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right) + 1);
	}

	return (0);
}
