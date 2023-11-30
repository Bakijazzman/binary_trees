#include "binary_trees.h"
/**
 * binary-tree_insert_right - insert right
 * @parent: parent
 * @value: value
 * Return: ponter to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *old;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	if (parent->right)
	{
		old = parent->right;
		old->parent = new;
		new->right = old;
	}
	else
	{
		new->right = NULL;
	}
	parent->right = new;
	return (new);
}
