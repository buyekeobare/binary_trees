#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to first node 
 * @second: Pointer to second node
 * Return: Pointer to the lowest common ancestor || NULL if no ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *first_lca, *second_lca;

	for (first_lca = first; first_lca; first_lca = first_lca->parent)
		for (second_lca = second; second_lca; second_lca = second_lca->parent)
			if (first_lca == second_lca)
				return ((binary_tree_t *)first_lca);
	return (NULL);
}
