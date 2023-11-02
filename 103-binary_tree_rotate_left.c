#include "binary_trees.h"

/**
 * binary_tree_rotate_left - shift root to left
 * @tree: tree to rotate left
 *
 * Return: new root node, null
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (!tree || !(tree->right))
		return (NULL);

	new_root = tree->right;

	tree->parent = new_root;
	new_root->parent = NULL;

	if (new_root->left)
		new_root->left->parent = tree;

	tree->right = new_root->left;
	new_root->left = tree;
	return (new_root);
}
