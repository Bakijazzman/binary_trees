#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert left
 * @parent: parent
 * @value: value
 * Return: pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *old;

	if (!parent)
	{
		return (NULL);
	}
	new = malloc(sizeof(binary_tree_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = value;
	new->right = NULL;
	new->parent = parent;
	if (parent->left != NULL)
	{
		old = parent->left;
		old->parent = new;
		new->parent = old;
	}
	else
	{
		new->left = NULL;
	}
	parent->left = new;
	return (new);
}
