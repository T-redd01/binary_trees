#include "binary_trees.h"

/**
 * is_full - check if tree is full
 * @tree: tree to check
 *
 * Return: 1 is full, 0 is not full
 */
int is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = is_full(tree->left);
	right = is_full(tree->right);

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
 * size - count nodes of a tree
 * @tree: to to count nodes
 *
 * Return: size of tree
 */
size_t size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - check if equal in heghts and nodes
 * @tree: tree to check
 *
 * Return: 1 is perfect, 0 is not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if ((is_full(tree->left) &&
			is_full(tree->right)) &&
				(size(tree->left) == size(tree->right)))
		return (1);
	return (0);
}
