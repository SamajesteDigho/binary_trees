#include "binary_trees.h"
/**
 * binary_tree_height - Binary Tree Hieght
 * @tree: The tree to traverse
 * Description: Getting the hieght of the tree
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t hl, hr;
if (tree == NULL)
return (0);
hl = 1 + binary_tree_height(tree->left);
hr = 1 + binary_tree_height(tree->right);
if (hl >= hr)
return (hl);
else
return (hr);
}
