#include "binary_trees.h"
/**
*binary_tree_uncle - functions shows if tree has siblings.
*@node: node of tree to check
*Return: uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - Gets the sibling node
 * @node: Pointer to the node to find sibling
 * Return: Sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
