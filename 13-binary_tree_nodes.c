#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: nodes with at least 1 child in a binary tree,
 * If tree is NULL, the function must return
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t p_nodes = 0;

	if (!tree)
		return (0);

	if (tree->right || tree->left)
		p_nodes += 1;

	p_nodes += binary_tree_nodes(tree->left);
	p_nodes += binary_tree_nodes(tree->right);

	return (p_nodes);
}
