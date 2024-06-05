#include "binary.h"
/**
* binary_tree_uncle - functions shows if tree has siblings
* @node: node of tree to check
* Return: uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL) return NULL;
	if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}
	else
	{
		return (node->parent->parent->left);
	}

}
