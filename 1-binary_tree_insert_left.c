#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a
 * node as the left-child of another node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *temp = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	if (parent->left == NULL)
	{
		parent->left = new_node;
		return (new_node);
	}
	temp = parent->left;
	new_node->left = temp;
	parent->left = new_node;
	temp->parent = new_node;

	return (new_node);
}
