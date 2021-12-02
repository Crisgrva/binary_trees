#include "binary_trees.h"
/**
 * binary_tree_leaves - Write a function that counts 
 * the leaves in a binary tree
 * @tree:  is a pointer to the root node of the tree to traverse
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);

		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}

	return (0);
}
