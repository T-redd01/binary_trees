#include "binary_trees.h"

/**
 * binary_trees_ancestor - find lowest common ancestor
 * @first: node one
 * @second: node two
 *
 * Return: lowest / earliest parent, null
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *one, *two;

	if (!first || !second)
		return (NULL);

	one = first;
	while (one)
	{
		two = second;
		while (two)
		{
			if (one == two)
				return ((binary_tree_t *)one);
			two = two->parent;
		}
		one = one->parent;
	}
	return (NULL);
}
