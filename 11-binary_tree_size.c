#include "binary_trees.h"
/**
 * binary_tree_size - Binary Tree Size
 * @tree: The tree to traverse
 * Description: Getting the size of a tree
 * Return: The size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
