#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Rotates right on the binary tree.
 * @tree: Pointer to the root node of the tree
 * Return: Pointer to the new node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_node;

	if (tree == NULL || tree->left == NULL)
	{
		return (NULL);
	}
	new_node = tree->left;
	tree->left = new_node->right;
	if (new_node->right != NULL)
	{
		new_node->right->parent = tree;
	}
	new_node->right = tree;
	new_node->parent = tree->parent;
	tree->parent = new_node;
	return (new_node);
}
