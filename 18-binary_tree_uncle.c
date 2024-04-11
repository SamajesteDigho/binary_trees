#include "binary_trees.h"
/**
 * binary_tree_uncle - Binary Tree Uncle
 * @node: Node concerned
 * Description: Find uncle of a node
 * Return: pointer to node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
return (NULL);
if (node->parent->parent->left == node->parent)
return (node->parent->parent->right);
else
return (node->parent->parent->left);
}
