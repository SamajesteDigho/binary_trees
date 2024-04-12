#include "binary_trees.h"
/**
 * binary_tree_rotate_left - Binary Trees Rotate Left
 * @tree: Tree concerned
 * Description: Rotate tree to the left
 * Return: Pointer to rotated tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *x, *y;
if (tree == NULL)
return (NULL);
if (tree->right == NULL)
return (tree);
x = tree;
y = tree->right;
x->right = y->left;
y->left = x;
y->parent = x->parent;
x->parent = y;
if (x->right != NULL)
x->right->parent = x;
return (y);
}
