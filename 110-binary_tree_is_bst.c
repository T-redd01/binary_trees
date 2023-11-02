#include "binary_trees.h"

/**
 * binary_tree_is_bst - check if tree is bst
 * @tree: tree to test
 *
 * Return: 1 if is bst, 0 if not
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int left, right, val;

	if (!tree)
		return (0);

	left = binary_tree_is_bst(tree->left);
	right = binary_tree_is_bst(tree->right);

	val = tree->n;
	if (val > tree->left->n && val < tree->right->n)
		return (1);
	if (val < tree->left->n || val > tree->right->n)
		return (0);

	return ((left > right) ? right:left);
}
