#include "binary_trees.h"

/**
* binary_tree_balance - Measures balance factor of a binary tree
* @tree: tree to go through
* Return: balanced factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
int lsub, rsub;
if (tree == NULL)
return (0);

lsub = (int)(binary_tree_height(tree->left));
rsub = (int)(binary_tree_height(tree->right));

return (lsub - rsub);
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
size_t left_h, right_h;

if (tree == NULL)
return (0);

left_h = tree->left ? 1 + binary_tree_height(tree->left) : 1;
right_h = tree->right ? 1 + binary_tree_height(tree->right) : 1;

return (left_h > right_h ? left_h : right_h);

}
