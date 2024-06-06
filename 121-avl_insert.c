#include "binary_trees.h"

/**
 * insert_node_avl - Node value instertion in a AVL
 * @tree: Double pointer of root node of the AVL
 * @parent: Parent node
 * @type: Double pointer of left or right insertion.
 * @avl_val: Insertion value of the AVL.
 * Return: Pointer to the new root after insertion || otherwise NULL
 */
avl_t *insert_node_avl(avl_t **tree, avl_t *parent, avl_t **type, int avl_val)
{
	int val;

	if (*tree == NULL)
		return (*type = binary_tree_node(parent, avl_val));
	if ((*tree)->n > avl_val)
	{
		(*tree)->left = insert_node_avl(&(*tree)->left, *tree, type, avl_val);
		if ((*tree)->left == NULL)
			return (NULL);
	}
	else if ((*tree)->n < avl_val)
	{
		(*tree)->right = insert_node_avl(&(*tree)->right, *tree, type, avl_val);
		if ((*tree)->right == NULL)
			return (NULL);
	}
	else
	{
		return (*tree);
	}
	val = binary_tree_balance(*tree);
	if (val > 1 && (*tree)->left->n > avl_val)
	{
		*tree = binary_tree_rotate_right(*tree);
	}
	else if (val > 1 && (*tree)->left->n < avl_val)
	{
		(*tree)->left = binary_tree_rotate_left((*tree)->left);
		*tree = binary_tree_rotate_right(*tree);
	}
	else if (val < -1 && (*tree)->right->n < alv_val)
	{
		*tree = binary_tree_rotate_left(*tree);
	}
	else if (val < -1 && (*tree)->right->n > avl_val)
	{
		(*tree)->right = binary_tree_rotate_right((*tree)->right);
		*tree = binary_tree_rotate_left(*tree);
	}
	return (*tree);
}
/**
 * avl_insert - Inserts a value into an AVL tree
 * @tree: Double pointer to the root node of the AVL tree
 * @value: Value to store in the node
 * Return: Inserted node || NULL if fails.
 */
avl_t *avl_insert(avl_t **tree, int value)
{
	avl_t *type = NULL;

	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	insert_node_avl(tree, *tree, &type, value);
	return (type);
}
