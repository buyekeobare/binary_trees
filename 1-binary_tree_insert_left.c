#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts the left child
 * @parent: Pointer to the node to insert the left child
 * @value: Value to store in the new_left_child
 * Return: Pointer to the new_left_child || NULL on failure or parent is NULL
 * If parent already has a left child, replace with new_left_child node and set
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_child;

	if (parent == NULL)
		return (NULL);

	  /* Allocation of memory for the new left child */
	new_left_child = malloc(sizeof(binary_tree_t));

	if (new_left_child == NULL)
		return (NULL);

	new_left_child->parent = parent;
	new_left_child->n = value;
	/* Replace the old left child, if it exists */
	new_left_child->left = parent->left;
	new_left_child->right = NULL;
	/* Point left child parent to the new left child */
	parent->left = new_left_child;

	/*If the old left child exists, set it as new left child */
	if (new_left_child->left)
	{
		new_left_child->left->parent = new_left_child;
	}

	return (new_left_child);
}
