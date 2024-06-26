#include "binary_trees.h"
/**
* binary_tree_sibling - function that checks if a node has a sibling
* @node: node to be checked.
* Return: pointer to the sibling node.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
