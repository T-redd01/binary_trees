#include "binary_trees.h"

/**
 * binary_tree_is_leafB - test if tree has left or right node
 * @node: node to test
 *
 * Return: 1 is leaf, 0 is not leaf
 */
int binary_tree_is_leafB(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left || node->right)
		return (0);
	return (1);
}

/**
 * binary_tree_leavesC - count leaves of tree
 * @tree: tree to use
 *
 * Return: number of leaves
 */
size_t binary_tree_leavesC(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_leavesC(tree->left) +
			binary_tree_leavesC(tree->right) +
			binary_tree_is_leafB(tree));
}

/**
 * maxC - find max number
 * @num1: num to compare
 * @num2: num to compare
 *
 * Return: max number
 */
int maxB(int num1, int num2)
{
        if (num1 > num2)
                return (num1);
        return (num2);
}

/**
 * binary_tree_is_full - check if no single child nodes
 * @tree: tree to check
 *
 * Return: 1 is full, 0 nto full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int ret = 0;

	if (!tree)
		return (0);

	if (tree->left && !(tree->right))
		return (1);
	if (tree->right && !(tree->left))
		return (1);

	ret = maxB(binary_tree_is_full(tree->left), binary_tree_is_full(tree->right));
	return ((ret - 1) * -1);
}
