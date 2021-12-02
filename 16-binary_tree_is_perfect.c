#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:  is a pointer to the root node of the tree to traverse
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree:  is a pointer to the root node of the tree to traverse
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	return ((binary_tree_is_full(tree->left) == 1) &&
					(binary_tree_is_full(tree->right) == 1)
				? 1
				: 0);
}

/**
 * binary_tree_is_perfect - function that checks if
 * a binary tree is perfect
 * @tree:  is a pointer to the root node of the tree
 * to count the number of nodes
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		return ((binary_tree_is_full(tree->left) == 1) &&
						(binary_tree_is_full(tree->right) == 1)
					? 1
					: 0);
	}
	return (0);
}
