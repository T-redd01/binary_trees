#include "binary_trees.h"

int binary_tree_is_leafC(const binary_tree_t *node)
{
        if (!node)
                return (0);

        if (node->left || node->right)
                return (0);
        return (1);
}

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
