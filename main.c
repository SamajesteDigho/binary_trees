#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *first, *second, *ancestor;

	first = NULL;
	second = NULL;
	ancestor = binary_trees_ancestor(first, second);
	printf("Lowest common ancestor of (%p) and (%p) is: ", (void *)first, (void *)second);
	printf("%p\n", (void *)ancestor);

	return (0);
}
