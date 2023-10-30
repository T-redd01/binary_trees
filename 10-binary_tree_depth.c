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
	size_t leaf = 0;

	if (!tree || !(tree->parent))
		return (0);

	if ((binary_tree_is_leafC(tree->left)))
		leaf++;
	if ((binary_tree_is_leafC(tree->right)))
		leaf++;

	return (binary_tree_depth(tree->parent) + leaf);
}
