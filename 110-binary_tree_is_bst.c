#include "binary_trees.h"
#include <limits.h>

/**
 * is_bst_binary_tree - Performs inorder of travesal
 * @root: Pointer to the root node of the tree to check
 * @trav: Pointer to the int holding traversed value
 * Return: 1 if valid BST || 0 otherwise
 */

int is_bst_binary_tree(const binary_tree_t *root, int *trav)
{
	if (!root)
		return (1);

	if (!is_bst_binary_tree(root->left, trav))
		return (0);

	if (*trav >= root->n)
		return (0);

	*trav = root->n;

	return (is_bst_binary_tree(root->right, trav));
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a BST
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if valid BST || 0 if not || 0 if NULL
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	int trav = INT_MIN;

	if (!tree)
		return (0);


	return (is_bst_binary_tree(tree, &trav));
}
