#include "binary_trees.h"

/**
 * max - find max number
 * @num1: num to compare
 * @num2: num to compare
 *
 * Return: max number
 */
size_t max(size_t num1, size_t num2)
{
	if (num1 > num2)
		return (num1);
	return (num2);
}

/**
 * binary_tree_height - find height of tree
 * @tree: tree to count height
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree || !(tree->parent))
		return (0);

	if (tree->left)
		left = binary_tree_height(tree->left) + 1;

	if (tree->right)
		right = binary_tree_height(tree->left) + 1;

	return (max(left, right));
}
