#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert right child
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to right child || NULL on failure || parent is NULL
 * If parent already has a right-child, the new node must take its place
 * and the old right-child must be set as the right-child of the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_child;

	if (parent == NULL)
		return (NULL);

	new_right_child = malloc(sizeof(binary_tree_t));

	if (new_right_child == NULL)
		return (NULL);

	new_right_child->parent = parent;
	new_right_child->n = value;
	new_right_child->left = NULL;
	new_right_child->right = parent->right;

	parent->right = new_right_child;

	if new_(right_child->right)
	{
		new_right_child->right->parent = new_right_child;
	}

	return (new_right_child);
}
