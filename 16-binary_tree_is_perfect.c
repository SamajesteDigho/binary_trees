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
 * check_balance - Binary Tree Balance
 * @tree: The tree to traverse
 * Description: Get the balance degree of a tree
 * Return: The balance degree
 */
int check_balance(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (get_depth(tree->left) - get_depth(tree->right));
}

/**
 * check_full_connection - Check Full Connection
 * @tree: The tree to traverse
 * Description: Verify all nodes have 2 orno child
 * Return: 1 or 0
 */
int check_full_connection(const binary_tree_t *tree)
{
if (tree == NULL)
return (1);
if ((tree->left == NULL && tree->right == NULL)
|| (tree->left != NULL && tree->right != NULL))
return (check_full_connection(tree->left)
& check_full_connection(tree->right));
else
return (0);
}

/**
 * binary_tree_is_perfect - Binary Tree Perfect
 * @tree: The tree to traverse
 * Description: Check if a tree is perfect
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (check_balance(tree) != 0)
return (0);
if (check_full_connection(tree) == 0)
return (0);
return (1);
}
