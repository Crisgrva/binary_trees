#include "binary_trees.h"
/**
 * count_height - function that measures the height of a binary tree
 * @tree: a binary_tree_t that keeps a binary tree
 * @count_l: a size_t what counts the children of the left of tree
 * @count_r:a size_t what counts the children of the right of tree
 * Return: Always(total)
 */
size_t count_height(const binary_tree_t *tree, size_t count_l, size_t count_r)
{
	size_t total = count_l + count_r;

	if (tree->left)
		total = count_height(tree->left, count_l + 1, count_r);
	else if (tree->right)
		total = count_height(tree->right, count_l, count_r + 1);
	return (total);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:  is a pointer to the root node of the tree to traverse
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter_l = 0, counter_r = 0;

	if (!tree)
		return (0);

	return (count_height(tree, counter_l, counter_r));
}
