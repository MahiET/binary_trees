#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a tree in post-order calling func
 * @tree: const pointer to root node to begin traversal at
 * @func: pointer to a function to call for each node.
 * Return: Nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
