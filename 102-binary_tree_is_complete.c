#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of the binary tree
 * @stem: pointer to measure the size of
 * Return: size of the tree || 0 if NULL
 */

size_t binary_tree_size(const binary_tree_t *stem)
{
	if (stem == NULL)
		return (0);
	return (1 + binary_tree_size(stem->left) + binary_tree_size(stem->right));
}

/**
 * is_complete_binary_tree - Recursive helper function
 * @stem: pointer to the root of the node
 * @index: Index of the current node
 * @size: total number of node in the tree
 * Return: 1 if the tree is complete || 0 on failure
 */

int is_complete_binary_tree(const binary_tree_t *stem, size_t index, size_t size)
{
	if (stem == NULL)
		return (1);

	if (index >= size)
		return (0);

	return (is_complete_binary_tree(stem->left, 2 * index + 1, size) &&
		is_complete_binary_tree(stem->right, 2 * index + 2, size));
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the node
 * Return: 0 if tree is NULL
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);
	return (is_complete_binary_tree(tree, 0, size));
}
