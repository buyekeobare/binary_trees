#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if the tree is full
 * @tree: pointer to node tree to be checked
 * Return: 0 if tree is NULL else 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	return (0);
}
