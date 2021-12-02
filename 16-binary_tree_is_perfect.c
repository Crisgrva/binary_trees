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
 * binary_tree_balance - function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree:  is a pointer to the root node of the tree
 * to count the number of nodes
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (!tree)
		return (0);

	if (tree->left)
		height_l = binary_tree_height(tree->left) + 1;
	else
		height_l = 0;

	if (tree->right)
		height_r = binary_tree_height(tree->right) + 1;
	else
		height_r = 0;

	return (height_l - height_r);
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

	if (binary_tree_balance(tree) == 0)
		return ((binary_tree_is_perfect(tree->left) ==
			binary_tree_is_perfect(tree->right)) ? 1 : 0);

	return (0);
}
