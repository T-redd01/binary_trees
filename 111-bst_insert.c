#include "binary_trees.h"

binary_tree_node

/**
 * bst_insert - insert into search tree
 * @tree: double pointer to tree
 * @value: new value to add
 *
 * Return: new node, null
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *node, *travel = *tree;

	if (!tree)
		return (NULL);

	if (!travel)
	{
		node = binary_tree_node(NULL, value);
		*tree = node;
		return (node);
	}

	while (travel->left || travel->right)
	{
		if (travel->n == value)
			return (NULL);

		if (travel->n > value)
			travel = travel->left;
		else if (travel->n < value)
			travel = travel->right;
		else
			break
	}
	if (travel->n > value)
	{
		node = binary_tree_node(travel, value);
		node->left = travel->left;
}
