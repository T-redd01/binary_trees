#include "binary_trees.h"

/**
 * binary_tree_is_leafC - test if tree has left or right node
 * @node: node to test
 *
 * Return: 1 is leaf, 0 is not leaf
 */
int binary_tree_is_leafC(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left || node->right)
		return (0);
	return (1);
}

/**
 * binary_tree_leaves - count leaves of tree
 * @tree: tree to use
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right) +
			binary_tree_is_leafC(tree));
}
