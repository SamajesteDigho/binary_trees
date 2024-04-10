#include "binary_trees.h"
/**
 * binary_tree_is_root - Binary Tree Is Root
 * @node: The node considered
 * Description: Check if a node is a root
 * Return: 1 or 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL || node->parent != NULL)
return (0);
return (1);
}
