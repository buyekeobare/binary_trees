#include "binary_trees.h"

/**
 * binary_tree_preorder - Pre-order travesal
 * @tree: Pointer to root node
 * @func: Pointer to a function to call for each node
 * Description: The value of the node must passed a param to this function
 * If tree or func is NULL do nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;


	func(tree->n);

	binary_tree_preorder(tree->right, func);

	binary_tree_preorder(tree->left, func);
}
