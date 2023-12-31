#include "binary_trees.h"

/**
 * binary_tree_is_leaf - test if tree has left or right node
 * @node: node to test
 *
 * Return: 1 is leaf, 0 is not leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left || node->right)
		return (0);
	return (1);
}
