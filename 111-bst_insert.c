#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree
 * @tree: Double pointer to the root node
 * @value: Value to store in the node to be inserted
 * Return: Pointer to the created node || NULL on failure
 */


bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new, *second;

	if (tree == NULL || *tree == NULL)
	{
		new = binary_tree_node(NULL, value);
		*tree = new;
		return (new);
	}

	second = *tree;

	while (second != NULL)
	{
		if (second->n == value)
			return (NULL);
		if (second->n > value)
		{
			if (second->left == NULL)
			{
				second->left = binary_tree_node(second, value);
				return (second->left);
			}
			second = second->left;
		}
		if (second->n < value)
		{
			if (second->right == NULL)
			{
				second->right = binary_tree_node(second, value);
				return (second->right);
			}
			second = second->right;
		}
	}
	return (NULL);
}
