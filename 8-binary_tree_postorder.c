#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse tree with post order
 * @tree: tree to traverse
 * @func: func to use on tree node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
