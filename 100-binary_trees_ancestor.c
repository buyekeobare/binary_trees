#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor (LCA)
 * @first: Pointer to first node
 * @second: Pointer to second node
 * Return: Pointer to the LCA, or NULL no LCA
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *left_ancestor, *right_ancestor;

	for (left_ancestor = first; left_ancestor; left_ancestor = left_ancestor->parent)
		for (right_ancestor = second; right_ancestor; right_ancestor = right_ancestor->parent)
			if (left_ancestor == right_ancetsor)
				return ((binary_tree_t *)left_ancestor);
	return (NULL);
}
