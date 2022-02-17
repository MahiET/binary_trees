#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	
	left = tree->left ? binary_tree_height(tree->left)+ 1 : 0;
 	right = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return = (left - right);
}

/**
 * binary_tree_height - height of binary tree
 * @tree: pointer to the root node of the tree
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
  size_t left, right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
}
