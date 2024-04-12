#include "binary_trees.h"
/**
 * binary_tree_rotate_right - Binary Trees Rotate Right
 * @tree: Tree concerned
 * Description: Rotate tree to the right
 * Return: Pointer to rotated tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
binary_tree_t *x, *y;
if (tree == NULL)
return (NULL);
if (tree->left == NULL)
return (tree);
y = tree;
x = tree->left;
y->left = x->right;
x->right = y;
x->parent = y->parent;
y->parent = x;
if (y->left != NULL)
y->left->parent = y;
return (x);
}
