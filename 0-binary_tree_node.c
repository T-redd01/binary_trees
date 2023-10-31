#include "binary_trees.h"

/**
 * binary_tree_node - create a node
 * @parent: new nodes parent
 * @value: value to store
 *
 * Return: new node (Success), null (Failure)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
