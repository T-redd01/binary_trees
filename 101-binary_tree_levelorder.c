#include "binary_trees.h"

/**
 * binary_tree_levelorder - traverse tree with level order
 * @tree: tree to traverse
 * @func: function to use
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (!(tree->parent))
	{
		func(tree->n);
		if (tree->left)
			func(tree->left->n);
		if (tree->right)
			func(tree->right->n);
	}
	else
	{
		if (tree->left)
			func(tree->left->n);
		if (tree->right)
			func(tree->right->n);
	}

	binary_tree_levelorder(tree->left, func);
	binary_tree_levelorder(tree->right, func);
}
