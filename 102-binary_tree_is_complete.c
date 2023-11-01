#include "binary_trees.h"

/**
 * tree_size - count nodes of tree
 * @tree: tree to count nodes
 *
 * Return: size of tree
 */
size_t tree_sizeC(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + tree_sizeC(tree->left) + tree_sizeC(tree->right));
}

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_is_complete(tree->left);
	right = binary_tree_is_complete(tree->right);

	if (tree->left && !(tree->right))
		return (1);
	if (tree->left && tree->right)
		return (1);
	if (tree->right && !(tree->left))
		return (0);
	if (tree_sizeC(tree->left) < tree_sizeC(tree->right))
		return (0);

	return ((left < right) ? right:left);
}
