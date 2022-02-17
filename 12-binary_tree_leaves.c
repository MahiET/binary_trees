#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree:  pointer to the root node of the tree to count the number of leaves
 * Return: Number the leaves in a binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left, right, count;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	count = left + right;
	return (count);
}
