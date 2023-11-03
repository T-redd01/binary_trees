#include "binary_trees.h"

/**
 * bst_search - search for value in tree
 * @tree: tree to search
 * @value: value to find
 *
 * Return: node with value, null
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	while (tree)
	{
		if (tree->n > value)
			tree = tree->left;
		else if (tree->n < value)
			tree = tree->right;
		else
			return ((bst_t *)tree);
	}
	return (NULL);
}
