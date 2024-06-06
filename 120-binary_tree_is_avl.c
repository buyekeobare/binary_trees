#include "binary_trees.h"
#include <limits.h>
#include <stdlib.h>

/**
 * height_binary_tree - Measures the height of a binary tree
 * @tree: Pointer to tree to measure the height of
 * Return: Height of the tree || 0 if tree is NULL
 */
size_t height_binary_tree(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + height_binary_tree(tree->left) : 0;
	right_height = tree->right ? 1 + height_binary_tree(tree->right) : 0;
	return (left_height > right_height ? left_height : right_height);
}

/**
 * find_minimum_avl - Checks if a binary tree is an AVL
 * @tree: Pointer to the root node
 * @min: minimum value
 * @max: maximum value
 * Return: 1 if tree is AVL || 0 otherwise
 */
int find_minimum_avl(const binary_tree_t *tree, int min, int max)
{
	int left_path, right_path;

	if (!tree)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);

	left_path = tree->left ? 1 + height_binary_tree(tree->left) : 0;
	right_path = tree->right ? 1 + height_binary_tree(tree->right) : 0;

	if (abs(left_path - right_path) > 1)
		return (0);

	return (find_minimum_avl(tree->left, min, tree->n - 1) &&
		find_minimum_avl(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_is_avl - Checks if a binary tree is an AVL
 * @tree: Pointer to the root node
 * Return: 1 if tree is AVL || 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (find_minimum_avl(tree, INT_MIN, INT_MAX));
}

