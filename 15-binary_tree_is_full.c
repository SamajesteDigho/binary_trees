#include "binary_trees.h"
/**
 * binary_tree_is_full - Binary Tree Full
 * @tree: The tree to traverse
 * Description: Check if a tree is full
 * Return: The balance degree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if ((tree->left == NULL && tree->right == NULL))
return (1);
return (binary_tree_is_full(tree->left) & binary_tree_is_full(tree->right));
}
