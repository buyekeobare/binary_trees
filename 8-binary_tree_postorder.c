#include "binary_trees.h"

/**
 * binary_tree_postorder - Post-order traversal
 * @tree: Pointer to root node of tree to traverse
 * @func: Pointer to a function to call for each node
 * Description: Value in the node must pass as a parameter to this function.
 * If tree || func is NULL do nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;


	binary_tree_postorder(tree->left, func);

	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
