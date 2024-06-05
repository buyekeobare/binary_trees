#include "binary_trees.h"

/**
 * binary_tree_inorder - in-order traversal
 * @tree: Pointer to root node of trees to traverse
 * @func: Pointer to a function to call for each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;


	binary_tree_inorder(tree->left, func);

	func(tree->n);

	binary_tree_inorder(tree->right, func);
}
