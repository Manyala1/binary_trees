#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with atleast 1 child
 * @tree: A pointer to the root node of the tree to count the number of nodes
 *
 * Return: the number of nodes with atleast 1 child in the binary tree
 * or 0 if tree is NULL, a NULL pointer is not considered a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
