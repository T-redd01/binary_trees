#include "binary_trees.h"


/**
 * binary_tree_is_full - check if tree is full
 * @tree: tree to check
 *
 * Return: 1 is full, 0 is not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (tree->left && !(tree->right))
		return (0);

	if (tree->right && !(tree->left))
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);

	if (left > right)
		return (right);
	return (left);
}
