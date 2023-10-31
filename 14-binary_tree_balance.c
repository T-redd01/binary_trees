#include "binary_trees.h"

/**
 * maxC - find max number
 * @num1: num to compare
 * @num2: num to compare
 *
 * Return: max number
 */
size_t maxC(size_t num1, size_t num2)
{
	if (num1 > num2)
		return (num1);
	return (num2);
}

/**
 * binary_tree_heightC - find height of tree
 * @tree: tree to count height
 *
 * Return: height of tree
 */
size_t binary_tree_heightC(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + maxC(binary_tree_heightC(tree->left),
				binary_tree_heightC(tree->right)));
}

/**
 * binary_tree_balance - calc tree balance
 * @tree: tree to find balance
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor = 0;

	if (!tree)
		return (0);

	balance_factor = binary_tree_heightC(tree->left) -
		binary_tree_heightC(tree->right);
	return (balance_factor);
}
