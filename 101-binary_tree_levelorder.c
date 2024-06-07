#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse a binary tree using post-order traverse
 * @tree: Pointer to the tree to traverse
 * @func: Pointer to a function to call each node
 * @level: Level of the tree to call func upon
 */
void binary_tree_postorder(const binary_tree_t *tree,
		void (*func)(int), size_t level)
{
	if (level == 1)
		func(tree->n);
	else
	{
		binary_tree_postorder(tree->left, func, level - 1);
		binary_tree_postorder(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_height - Measures height of a binary tree
 * @tree: Pointer to tree to measure the height
 * Return: Height of the tree || 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_levelorder - Traverse a binary tree using level-order traverse
 * @tree: Pointer to the tree to traverse
 * @func: Pointer to a function to call each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level, max_level;

	if (!tree || !func)
		return;

	max_level = binary_tree_height(tree) + 1;

	for (level = 1; level <= max_level; level++)
		binary_tree_postorder(tree, func, level);
}

