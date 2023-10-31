#include "binary_trees.h"

/**
 * binary_tree_siblingC - get sibling of node
 * @node: node to find sibling
 *
 * Return: sibling of node, null
 */
binary_tree_t *binary_tree_siblingC(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

/**
 * binary_tree_uncle - get uncle node of node
 * @node: node to find uncle
 *
 * Return: uncle node, null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	return (binary_tree_siblingC(node->parent));
}
