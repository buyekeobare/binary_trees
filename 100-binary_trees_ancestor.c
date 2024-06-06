#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the LCA || NULL on failure
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *left_ancestor, *right_ancestor;

	for (left_ancestor = first; left_ancestor; left_ancestor = left_ancestor->parent)
		for (right_ancestor = second; right_ancestor; right_ancestor = right_ancestor->parent)
			if (left_ancestor == right_ancestor)
				return ((binary_tree_t *)left_ancestor);
	return (NULL);
}
