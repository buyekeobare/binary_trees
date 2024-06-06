#include "binary_trees.h"
/**
* binary_tree_height_b - Measures height of a binary tree for a balance tree
* @tree: tree to be checked
* Return: the height
*/
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t lft = 0;
	size_t rgt = 0;
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			lft = tree->left ? 1 + binary_tree_height_b(tree->left);
			rgt = tree->right ? 1 + binary_tree_height_b(tree->right);
		}
		return ((lft > rgt) ? lft : rgt);
	}
}
/**
* binary_tree_balance - Measures balance factor of a binary tree
* @tree: tree be checked
* Return: balanced factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, tot = 0;
	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		tot = left - right;
	}
	return (tot);
}
