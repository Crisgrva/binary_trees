#include "binary_trees.h"

/**
 * parent_depth - function that measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * @counter: counter to sum steps
 * Return: Counter
 */

size_t parent_depth(const binary_tree_t *tree, size_t counter)
{
	size_t total_counter = counter;

	if (tree->parent)
		total_counter = parent_depth(tree->parent, counter + 1);
	return (total_counter);
}

/**
 * binary_tree_depth - function that measures the depth of
 * a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);
	counter = parent_depth(tree, counter);
	return (counter);
}
