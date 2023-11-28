#include "binary_trees.h"

/**
* binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
* @tree: tree to count the nodes from
*
* Return: number of nodes counted
*         0 if tree is NULL
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t size, leaves;

if (tree == NULL)
return (0);

size = binary_size_size(tree);
leaves = binary_size_leaves(tree);

return (size - leaves);
}
