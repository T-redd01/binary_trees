#include "binary_trees.h"

/**
 * bst_insert - insert into search tree
 * @tree: double pointer to tree
 * @value: new value to add
 *
 * Return: new node, null
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *travel = *tree;

	if (!tree)
		return (NULL);
	if (!travel)
	{
		*tree = (bst_t *)binary_tree_node(NULL, value);
		return (*tree);
	}
	while (travel)
	{
		if (value > travel->n)
		{
			if (travel->right)
				travel = travel->right;
			else
			{
				travel->right = (bst_t *)binary_tree_node(travel, value);
				return (travel->right);
			}
		}
		else if (value < travel->n)
		{
			if (travel->left)
				travel = travel->left;
			else
			{
				travel->left = (bst_t *)binary_tree_node(travel, value);
				return (travel->left);
			}
		}
		else
			return (NULL);
	}
	return (NULL);
}
