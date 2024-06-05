#include "binary_tree.h"
/**
 * binary_tree_is_full - function that checks if tree is full
 * @tree: pointer to node tree to be checked
 * Return: 0 if tree is NULL else 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l = 0, r = 0;
	if (tree ==  NULL) return (0);
	else
	{
		if (tree->l && tree->r)
		{
			l = binary_tree_is_full(tree->l);
			r = binary_tree_is_full(tree->r);
			if (l == 0 || r == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!tree->l && !tree->r) return (1);
		else return (0);
	}
}
