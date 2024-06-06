#include "binary_trees.h"

/**
 * binary_tree_size - Counts number of nodes in the binary tree
 * @stem: Pointer to root of the node to count
 * Return: Number of nodes in the tree || 0 if NULL
 */

size_t binary_tree_size(const binary_tree_t *stem)
{
	if (stem == NULL)
		return (0);
	return (1 + binary_tree_size(stem->left) + binary_tree_size(stem->right));
}

/**
 * is_complete_binary_tree - Recursive helper function
 * @stem: Pointer to the root of the node to check
 * @i: Index of the current node
 * @s: Total number of nodes in the binary tree
 * Return: 1 if the binary tree is complete or 0 on failure
 */

int is_complete_binary_tree(const binary_tree_t *stem, size_t i, size_t s)
{
	if (stem == NULL)
		return (1);

	if (i >= s)
		return (0);

	return (is_complete_binary_tree(stem->left, 2 * i + 1, s) &&
		is_complete_binary_tree(stem->right, 2 * i + 2, s));
}

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the node
 * Return: 1 if tree is complete || 0 if NULL
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t s;

	if (tree == NULL)
		return (0);

	s = binary_tree_size(tree);
	return (is_complete_binary_tree(tree, 0, s));
}
