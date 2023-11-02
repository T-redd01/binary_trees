#include "binary_trees.h"

/**
 * array_to_bst - turn array into bst
 * @array: array of values
 * @size: size of arr
 *
 * Return: root node, null
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *root = NULL;

	root = bst_insert(&root, array[0]);
	for (i = 1; i < size; i++)
		bst_insert(&root, array[i]);
	return (root);
}
