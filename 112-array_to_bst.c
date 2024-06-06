#include "binary_trees.h"

/**
 * array_to_bst - Builds a Binary Search Tree from an array
 * @array: Pointer to the first element to be converted
 * @size: Number of elements in the array
 * Return: Pointer to the root node of the converted BST || NULL on failure
 */

bst_t *array_to_bst(int *array, size_t size)
{
	size_t y;
	bst_t *tree = NULL;

	for (y = 0; y < size; y++)
	{
		bst_insert(&tree, array[y]);
	}

	return (tree);
}
