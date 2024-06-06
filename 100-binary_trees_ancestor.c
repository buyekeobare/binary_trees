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
	const binary_tree_t *first_lca, *second_lca;

	for (first_lca = first; first_lca; first_lca = first_lca->parent)
		for (second_lca = second; second_lca; second_lca = second_lca->parent)
			if (first_lca == second_lca)
				return ((binary_tree_t *)first_lca);
	return (NULL);
}
