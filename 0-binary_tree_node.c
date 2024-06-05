#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: - Pointer to the parent node of the node to create
 * @value: - Value to put in the new_node
 * Return: Pointer to the new_node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* declare the new_node with its data type */
	binary_tree_t *new_node;

	/* assign memory space for that node */
	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	/* allocate values to the properties of the node */
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	/* return a pointer to the node */
	return (new_node);
}
