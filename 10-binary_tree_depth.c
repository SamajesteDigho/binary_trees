#include "binary_trees.h"
/**
 * binary_tree_depth - Binary Tree Depth
 * @tree: The tree to traverse
 * Description: Getting the depth of a node in a tree
 * Return: The depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth;
binary_tree_t *tmp;
if (tree == NULL)
return (0);
depth = 0;
tmp = tree->parent;
while (tmp != NULL)
{
depth += 1;
tmp = tmp->parent;
}
return (depth);
}
