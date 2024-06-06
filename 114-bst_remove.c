#include "binary_trees.h"

/**
 * find_minimum_bst - Finds the minimum value of BST
 * @tree: Pointer of the tree to check
 * Return: Mininum value of this tree
 */

int find_minimum_bst(bst_t *tree)
{
	int left = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left = find_minimum_bst(tree->left);
		if (left == 0)
		{
			return (tree->n);
		}
		return (left);
	}
}

/**
 * next_successor - Gets the next successor using the minimum value
 * and replaces the node value
 * @root: Pointer node that has the two children
 * Return: Value found
 */

int next_successor(bst_t *root)
{
	int type = 0;

	type = find_minimum_bst(root->right);
	root->n = type;
	return (type);
}

/**
 *remove_node - Removes a node depending on its children
 *@root: Pointer to node to remove
 *Return: 0 if it has no children or otherwise
 */

int remove_node(bst_t *root)
{
	if (!root->left && !root->right)
	{
		if (root->parent->right == root)
			root->parent->right = NULL;
		else
			root->parent->left = NULL;
		free(root);
		return (0);
	}
	else if ((!root->left && root->right) || (!root->right && root->left))
	{
		if (!root->left)
		{
			if (root->parent->right == root)
				root->parent->right = root->right;
			else
				root->parent->left = root->right;
			root->right->parent = root->parent;
		}
		if (!root->right)
		{
			if (root->parent->right == root)
				root->parent->right = root->left;
			else
				root->parent->left = root->left;
			root->left->parent = root->parent;
		}
		free(root);
		return (0);
	}
	else
		return (next_successor(root));
}

/**
 * bst_remove - Removes a node from a Binary Search Tree
 * @root: Pointer to the root node of the Binary Search Tree
 * @value: Value to remove from the Binary Search Tree
 * Return: Pointer to the new root node
 */

bst_t *bst_remove(bst_t *root, int value)
{
	int i = 0;

	if (root == NULL)
		return (NULL);
	if (value < root->n)
		bst_remove(root->left, value);
	else if (value > root->n)
		bst_remove(root->right, value);
	else if (value == root->n)
	{
		i = next_successor(root);
		if (i != 0)
			bst_remove(root->right, i);
	}
	else
		return (NULL);
	return (root);
}
