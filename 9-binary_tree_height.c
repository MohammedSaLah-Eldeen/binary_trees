#include "binary_trees.h"

/**
* get_depth: gets the depth of a node.
* @node: node to get the depth for.
*
* Return: the depth of the node
*/
size_t get_depth(const binary_tree_t *node)
{
size_t depth = 0;
const binary_tree_t *temp = node;
while (temp)
{
depth++;
temp = temp->parent;
}

return (depth);
}


/**
* binary_tree_height - measures the height of a binary tree
* @tree: tree to measure the height of
*
* Return: height of the tree
*         0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t depth, left_depth, right_depth;
if (tree == NULL)
return (0);

depth = get_depth(tree);
left_depth = binary_tree_height(tree->left);
right_depth = binary_tree_height(tree->right);

if (depth < left_depth)
depth = left_depth;

if (depth < right_depth)
depth = right_depth;

return (depth);

}
