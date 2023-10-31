#include "binary_trees.h"

/**
 * binary_tree_is_fullC - check if tree is full
 * @tree: tree to check
 *
 * Return: 1 is full, 0 is not full
 */
int binary_tree_is_fullC(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_is_fullC(tree->left);
	right = binary_tree_is_fullC(tree->right);

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
 * maxA - find max number
 * @num1: num to compare
 * @num2: num to compare
 *
 * Return: max number
 */
size_t maxA(size_t num1, size_t num2)
{
	if (num1 > num2)
		return (num1);
	return (num2);
}

/**
 * binary_tree_heightB - find height of tree
 * @tree: tree to count height
 *
 * Return: height of tree
 */
size_t binary_tree_heightB(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = binary_tree_heightB(tree->left) + 1;

	if (tree->right)
		right = binary_tree_heightB(tree->right) + 1;

	return (maxA(left, right));
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

	if ((binary_tree_is_fullC(tree)) &&
			(binary_tree_heightB(tree->left) ==
			 binary_tree_heightB(tree->right)))
		return (1);
	return (0);
}
