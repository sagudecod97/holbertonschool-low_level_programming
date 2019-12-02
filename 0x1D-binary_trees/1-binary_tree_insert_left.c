#include "binary_trees.h"

/**
 * *binary_tree_insert_left - Inserts a node as left-child of another node
 * @parent: Parent's node
 * @value: Value of node
 * Return: Pointer created
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_left = NULL;

	if (parent == NULL)
		return (NULL);

	n_left = malloc(sizeof(binary_tree_t));

	if (n_left == NULL)
		return (NULL);

	n_left->left = NULL;
	n_left->right = NULL;

	if (parent->left != NULL)
	{
		n_left->left = parent->left;
		parent->left = n_left;
	}
	else
		parent->left = n_left;

	n_left->parent = parent;
	n_left->n = value;
	return (n_left);
}
