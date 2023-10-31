#include "binary_trees.h"

/**
 * binary_tree_preorder - print tree using preorder
 * @tree: tree to print
 * @func: func to call on node value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
