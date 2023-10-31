#include "binary_trees.h"

/**
 * has_child - checks if node has child
 * @node: node to check
 *
 * Return: 1 has child, 0 no children
 */
int has_child(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left || node->right)
		return (1);
	return (0);
}

/**
 * binary_tree_nodes - counts nodes with child nodes
 * @tree: tree to count nodes
 *
 * Return: number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right) +
			has_child(tree));
}
