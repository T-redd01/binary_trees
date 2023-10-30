#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left, *right;
	if (!tree)
		return;

	left = tree->left;
	right = tree->right;
	free(tree);

	binary_tree_delete(left);
	binary_tree_delete(right);
}
