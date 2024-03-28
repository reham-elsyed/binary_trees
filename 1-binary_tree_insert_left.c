#include "binary_trees.h"
/**
 *binary_tree_insert_left - function to ind=sert node in tree
 *@parent: pointer to the parent node
 *@value: value of data to he new node
 *Return: new-node on success null on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nw;

	if (parent == NULL)
		return (NULL);

	nw = binary_tree_node(parent, value);
	if (nw == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		nw->left = parent->left;
		parent->left->parent = nw;
	}
	parent->left = nw;
	return (nw);
}
