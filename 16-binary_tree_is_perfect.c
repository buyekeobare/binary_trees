#include "binary_trees.h"
/**
* tree_is_perfect - function that says if a tree is perfect or not
* it has to be the same quantity of levels in left as right, and also
* each node has to have 2 nodes or none
* @tree: tree to check
* Return: 0 if is not a perfect or other number that is the level of height
*/
int tree_is_perfect(const binary_tree_t *tree)
{
	int lft = 0, rgt = 0;
	if (tree->left && tree->right)
	{
		lft = 1 + tree_is_perfect(tree->left);
		rgt = 1 + tree_is_perfect(tree->right);
		if (rgt == lft && rgt != 0 && lft !=0) return (rgt);
		else
		{
			return (0);
		}
	}
	else if (!tree->left && !tree->right) return (1);
	else
	{
		return (0);
	}
}

/**
* binary_tree_is_perfect - function that checks perfect binary tree
* @tree: points to the root node to check
* Return: 0 if tree is NULL
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int res = 0;
	if (tree == NULL) return (0);
	else
	{
		res = tree_is_perfect(tree);
		if (res != 0) return (1);
		else
		{
			return (0);
		}
	}

}
