#include "binary_trees.h"

/**
 * binary_tree_rotate_right - shift tree to right
 * @tree
 *
 * Return: new root, null
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (!tree || !(tree->left))
		return (NULL);

	new_root = tree->left;

	tree->parent = new_root;
	new_root->parent = NULL;

	if (new_root->right)
		new_root->right->parent = tree;

	tree->left = new_root->right;
	new_root->right = tree;

	return (new_root);
}
