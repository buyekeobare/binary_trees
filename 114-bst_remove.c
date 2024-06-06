#include "binary_trees.h"

/**
 * find_minimum_bst - Finds the minimum value of BST
 * @tree: Pointer to the root node of the Binary search Tree
 * Return: NULL if node is NULL
 */

bst_t *find_minimum_bst(bst_t *tree)
{
	if (!tree)
		return (NULL);

	while (tree->left != NULL)
		tree = tree->left;
	return (tree);
}

/**
 * bst_remove - Removes a node from a Binary Search Tree
 * @root: Pointer to the root node of the Binary Search Tree
 * @value: Value to remove from the Binary Search Tree
 * Return: Pointer to the new root node
 */

bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *i;

	if (!root)
		return (NULL);

	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (root->left == NULL)
		{
			i = root->right;
			free(root);
			return (i);
		}
		else if (root->right == NULL)
		{
			i = root->left;
			free(root);
			return (i);
		}

		i = find_minimum_bst(root->right);
		root->n = i->n;

		root->right = bst_remove(root->right, i->n);
	}
	return (root);
}
