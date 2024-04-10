#include "binary_trees.h"
/**
 * binary_tree_delete - Binary Tree Delete
 * @tree: The parent node
 * Description: Delete a tree completely
*/
void binary_tree_delete(binary_tree_t *tree)
{
binary_tree_t *lc, *rc;
if (tree != NULL)
{
lc = tree->left;
rc = tree->right;
tree->left = NULL;
tree->right = NULL;
tree->parent = NULL;
free(tree);
binary_tree_delete(lc);
binary_tree_delete(rc);
}
}
