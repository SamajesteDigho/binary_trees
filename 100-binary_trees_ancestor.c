#include "binary_trees.h"
/**
 * get_node_depth - Get Node Depth
 * @tree: Node to consider
 * Description: Get the depth of the node
 * Return: Tree depth
 */
int get_node_depth(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (1 + get_node_depth(tree->parent));
}

/**
 * binary_trees_ancestor - Binary Trees Ancestor
 * @first: First node
 * @second: Second node
 * Description: Get the ancestor nearest
 * Return: Ancestor tree
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
int fd, sd, rollback;
binary_tree_t *node;
fd = get_node_depth(first);
sd = get_node_depth(second);

if (fd >= sd)
{
node = first->parent;
rollback = fd - sd;
}
else
{
node = second->parent;
rollback = sd - fd;
}
while (rollback > 0)
{
if (node == first || node == second)
return (node);
if (node != NULL)
node = node->parent;
rollback -= 1;
}
return (node);
}
