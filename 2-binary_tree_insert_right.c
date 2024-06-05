#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert the right child
 * @parent: Pointer to the node to insert the right child
 * @value: Value to store in the new_right_child node
 * Return: pointer to the right child || NULL on failure or parent is NULL
 * If parent already has a right child, replace with new_right_child node and set
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
	/* Replace the old right child, if it exists */
	new_right_child->left = NULL;
	new_right_child->right = parent->right;
	/* Point right child parent to the new right child */
	parent->right = new_right_child;

	/*If the old right child exists, set it as new right child */
	if (new_right_child->right)
	{
		new_right_child->right->parent = new_right_child;
	}

	return (new_right_child);
}
