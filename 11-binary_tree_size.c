#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree:  is a pointer to the root node of the tree to traverse
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);

	return (0);
}
