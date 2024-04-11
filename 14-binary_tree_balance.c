#include "binary_trees.h"
/**
 * get_depth - Get Depth
 * @tree: The tree to traverse
 * Description: Get the depth of a given tree
 * Return: The depth
 */
int get_depth(const binary_tree_t *tree)
{
int hl, hr;
if (tree == NULL)
return (0);
hl = get_depth(tree->left);
hr = get_depth(tree->right);
if (hl >= hr)
return (1 + hl);
else
return (1 + hr);
}

/**
 * binary_tree_nodes - Binary Tree Nodes
 * @tree: The tree to traverse
 * Description: Counting the number of nodes with atleat one child
 * Return: The number of nodes
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (get_depth(tree->left) - get_depth(tree->right));
}
