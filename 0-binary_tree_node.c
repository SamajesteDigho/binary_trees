#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *node;

node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
if (node == NULL)
return (NULL);
node->n = value;
node->left = NULL;
node->right = NULL;
node->parent = parent;
if (parent != NULL)
{
parent->left = node;
}

return (node);
}
