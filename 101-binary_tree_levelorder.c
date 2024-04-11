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
 * binary_tree_height - Binary Tree Hieght
 * @tree: The tree to traverse
 * Description: Getting the hieght of the tree
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (get_depth(tree) - 1);
}

/**
 * level_action - Level Action
 * @tree: The tree to traverse
 * @func: operation
 * @start: Starting
 * @end: Ending
 * Description: Apply action on all elements of level
 */
void level_action(const binary_tree_t *tree, void (*func)(int),
int start, int end)
{
if (tree != NULL && func != NULL && start >= 0 && end >= 0)
{
if (start == end)
func(tree->n);
else
{
level_action(tree->left, func, start + 1, end);
level_action(tree->right, func, start + 1, end);
}
}
}

/**
 * binary_tree_levelorder - Binary Trees Level order
 * @tree: Tree concerned
 * @func: Processing function
 * Description: Process a tree unsing process func
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
int i, depth;
if (tree != NULL && func != NULL)
{
depth = get_depth(tree);
for (i = 0; i < depth; i++)
level_action(tree, func, 0, i);
}
}
