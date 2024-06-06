#include "binary_trees.h"

/**
 * bst_search - Searches for a value in a Binary Search Tree
 * @tree: Pointer to the root node of the Binary Search Tree to search
 * @value: Value to search for in the tree
 * If tree is NULL or if nothi
 * Return: Pointer to the node with a value equal to value
 *         NULL if tree is NULL or no match is found
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree || tree->n == value)
		return ((bst_t *)tree);

	if (value < tree->n)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));

}
