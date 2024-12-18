#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - iterates through a binary tree
 * using pre-order traversal
 * @tree: pointer to the root of the tree to be traverse
 * @func: pointer to a function to call for each node
 *
 * Return nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
