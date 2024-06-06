#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Rotates left on the binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Pointer to the new node
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_node;

	if (tree == NULL || tree->right == NULL)
	{
		return (NULL);
	}
	new_node = tree->right;
	tree->right = new_node->left;
	if (new_node->left != NULL)
	{
		new_node->left->parent = tree;
	}
	new_node->left = tree;
	new_node->parent = tree->parent;
	tree->parent = new_node;
	return (new_node);
}
