#include "binary_trees.h"

/**
 * tree_is_full - check if tree is full
 * @tree: tree to check
 *
 * Return: 1 is full, 0 is not
 */
int tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = tree_is_full(tree->left);
	right = tree_is_full(tree->right);

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

/**
 * tree_size - count nodes of tree
 * @tree: tree to count nodes
 *
 * Return: size of tree
 */
size_t tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + tree_size(tree->left) + tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - check if tree left, right is bal and eq height
 * @tree: tree to check
 *
 * Return: 1 is perfect, 0 is not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);

	if ((tree_is_full(tree->left) &&
			tree_is_full(tree->right)) &&
			(tree_size(tree->left) == tree_size(tree->right)))
		return (1);
	return (0);
}
