#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root of the tree
 *
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_t *left = tree->left;
	binary_tree_t *right = tree->right;

	if (tree->left != NULL)
		binary_tree_delete(left);
	if (tree->right != NULL)
		binary_tree_delete(right);
	free(tree);
}
