#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 * Return: If tree is NULL, your function must return 0
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (node == node->parent->left ?
		node->parent->right : node->parent->left);
}
