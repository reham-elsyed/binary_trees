#include "binary_trees.h"
/**
 * binary_tree_node - Create binary tree
 * @parent: Abointer to root node
 * @Value: the value in the node
 *
 * Return: null in error, pointer to new node on success
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if(new_node == NULL)
		return(NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;

	return(new_node);
}
