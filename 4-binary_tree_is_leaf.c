#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that chrck if a node is a leaf
 * @node: pointer to the parent node of the check
 * Return: 1 if node is a leaf, otherwids NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left != NULL || node->right != NULL)
		return (0);
	else
		return (1);
}
