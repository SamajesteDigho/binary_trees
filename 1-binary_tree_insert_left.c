#include "binary_trees.h"
/**
 * binary_tree_insert_left - Binary Tree Insert Left
 * @parent: The parent node
 * @value: Value of new node
 * Description: Add a new node to the left of given parent
 * Return: Pointer on the new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
if (parent == NULL)
{
return (NULL);
}
new_node = binary_tree_node(NULL, value);
if (new_node == NULL)
{
return (NULL);
}
new_node->parent = parent;
if (parent->left != NULL)
{
new_node->left = parent->left;
parent->left->parent = new_node;
}
parent->left = new_node;
return (new_node);
}
