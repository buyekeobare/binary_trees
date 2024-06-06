#include "binary_trees.h"

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: Tree to be checked
 * Return: Balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	return  (height_binary_tree(tree->left) + height_binary_tree(tree->right));

}

/**
 * height_binary_tree - Measures height of a binary tree for a balanced tree
 * @tree: tree to be checked
 * Return: Height of the tree, or 0 on failure
 */

size_t height_binary_tree(const binary_tree_t *tree)
{
	size_t l_height = 0;
	size_t r_height = 0;

	if (!tree)
		return (0);

	l_height += 1 + height_binary_tree(tree->left);
	r_height += 1 + height_binary_tree(tree->right);

	if (l_height > r_height)
		return (l_height);
	else
		return (r_height);
}
