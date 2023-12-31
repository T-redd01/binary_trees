#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node to right
 * @parent: parent of new node
 * @value: value to store
 *
 * Return: new node, null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = parent->right;

	if (node->right)
		node->right->parent = node;

	parent->right = node;
	return (node);
}
