#include "binary_trees.h"
/**
 * binary_tree_insert_right - Binary Tree Insert Right
 * @parent: The parent node
 * @value: Value of new node
 * Description: Add a new node to the right of given parent
 * Return: Pointer on the new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
if (parent->right != NULL)
{
new_node->right = parent->right;
parent->right->parent = new_node;
}
parent->right = new_node;
return (new_node);
}
