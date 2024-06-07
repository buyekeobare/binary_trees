#include "binary_trees.h"
/**
*binary_tree_uncle - functions shows if tree has siblings
*@node: node of tree to check
*Return: uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
<<<<<<< HEAD
<<<<<<< HEAD
	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}
	else
	{
		return (node->parent->parent->left);
	}

=======
if (node == NULL || node->parent == NULL || node->parent->parent == NULL) return NULL;
=======
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
{
return NULL;
<<<<<<< HEAD
}
=======
>>>>>>> 82d7b8fae95a1146afc93b7853adbfe218ac70be
>>>>>>> 47900a0b60e90f6585d566886a2a1754f990f198
if (node->parent->parent->left == node->parent)
{
return (node->parent->parent->right);
}
else
{
return (node->parent->parent->left);
}
>>>>>>> 5f8406ef77f501f69754f456b02d0cb0e43ba761
}
