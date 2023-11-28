#include "binary_trees.h"

/**
* binary_tree_leaves - counts the leaves in a binary tree
* @tree: tree to count the leaves from
*
* Return: number of leaves
*         0 if tree is NULL
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaves;
if (tree == NULL)
return (0);

leaves = (tree->left) || (tree->right) ? binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left) : 1;
return (leaves);
}
