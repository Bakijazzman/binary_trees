#include "binary_trees.h"
/**
 * binary_tree_node - creates a new node
 * @parent: Parent node
 * @value: value of the node
 * Return: pointer to the  node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
	{
		return (NULL);
	}
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
