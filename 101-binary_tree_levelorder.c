#include "binary_trees.h"
void level_action(const binary_tree_t *tree, void (*func)(int), int start, int end)
{
    if (tree != NULL && func != NULL && start >= 0 && end >= 0)
    {
        if (start == end)
        {
            func(tree->n);
        }
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
    int i;
    if (tree != NULL && func != NULL)
    {
        for (i = 0; i < 5; i++)
        {
            level_action(tree, func, 0, i);
        }
    }
}
