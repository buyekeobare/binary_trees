#include "binary_trees.h"

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: Tree to be checked
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = height_binary_tree(tree->left);
	right_height = heigh_binary_tree(tree->right);

	return (left_height - right_height);
}

/**
 * height_binary_tree - Measures height of a binary tree for a balanced tree
 * @tree: tree to be checked
 * Return: Height of the tree, or 0 on failure
 */

size_t height_binary_tree(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
		return (0);

	left_height += 1 + height_binary_tree(tree->left);
	right_height += 1 + height_binary_tree(tree->right);

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
