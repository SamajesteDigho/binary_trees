#include "binary_trees.h"
/**
 * binary_tree_sibling - Binary Tree Sibling
 * @node: Node concerned
 * Description: Find sibling of a node
 * Return: Pointer to node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
if (node->parent->left == node)
return (node->parent->right);
else
return (node->parent->left);
}
