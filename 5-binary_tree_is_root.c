#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is root
 * @node: node to test
 *
 * Return: 1 is root, 0 is not root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent)
		return (0);
	return (1);
}
