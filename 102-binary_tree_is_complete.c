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
 * binary_tree_balance - Binary Tree Balance
 * @tree: The tree to traverse
 * Description: Get the balance degree of a tree
 * Return: The balance degree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (get_depth(tree->left) - get_depth(tree->right));
}

/**
 * check_left_first - Check left ordering
 * @tree: Tree concerned
 * Description: Check if left ordering
 * Return: 1 or 0
 */
int check_left_first(const binary_tree_t *tree)
{
if (tree == NULL)
return (1);
if ((tree->left == NULL) && (tree->right != NULL))
return (0);
return (check_left_first(tree->left) & check_left_first(tree->right));
}

/**
 * binary_tree_is_complete - Binary Trees Complete
 * @tree: Tree concerned
 * Description: Check if tress i complete
 * Return: 1 or 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
if (tree == NULL || binary_tree_balance(tree) > 1
|| check_left_first(tree) == 0)
return (0);
return (1);
}
