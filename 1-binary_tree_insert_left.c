#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node at left
 * @parent: parent node to insert into
 * @value: value to store in node
 *
 * Return: new node or null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = parent->left;
	node->right = NULL;

	if (node->left)
		node->left->parent = node;

	parent->left = node;
	return (node);
}
