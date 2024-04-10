#include "binary_trees.h"
/**
 * binary_tree_node - Binary Tree Node
 * @parent: The parent node
 * @value: Value of new node
 * Description: Create a new node and add it to the tree of given parent.
 * Return: Pointer on the new node
*/
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
return (node);
}
