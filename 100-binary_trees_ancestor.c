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
binary_tree_t *node1, *node2;
if (first == NULL || second == NULL)
return (NULL);
fd = get_node_depth(first);
sd = get_node_depth(second);
if (fd >= sd)
{
node1 = first->parent;
node2 = second->parent;
rollback = fd - sd - 1;
}
else
{
node1 = second->parent;
node2 = first->parent;
rollback = sd - fd - 1;
}
while (rollback > 0)
{
if (node1 != NULL)
node1 = node1->parent;
rollback -= 1;
}
if ((fd >= sd && node1 == second) || (sd >= fd && node1 == first))
return (node1);
else if (node1 == node2)
return (node2);
else
node1 = node1->parent;
while (node1 != NULL && node2 != NULL)
{
if (node1 == node2)
return (node1);
node1 = node1->parent;
node2 = node2->parent;
}
return (NULL);
}
