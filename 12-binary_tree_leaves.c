#include "binary_trees.h"
/**
 * binary_tree_leaves - function returns number of leaves
 * @tree; tree to be checked
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, lef = 0, r = 0;
	if (tree == NULL) return (0);
	else
	{
		lef = binary_trees_leaves(tree->left);
		r = binary_trees_leaves(trees->right);
		leaf = lef + r;
		return ((!lef && !r) ? leaf + : leaf + 0);
	}
}
