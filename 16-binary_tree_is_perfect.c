#include "binary_trees.h"

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect.
* @tree: A pointer to the root node of the tree to check.
*
* Return: If tree is NULL or not perfect, 0.
*         Otherwise, 1.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (binary_tree_is_full(tree) && binary_tree_balance(tree) == 0);
}

/**
* binary_tree_is_full - Checks if a binary tree is full.
* @tree: A pointer to the root node of the tree to check.
*
* Return: If tree is NULL or is not full - 0.
*         Otherwise - 1.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (is_full(tree));
}

/**
* is_full - Checks if a binary tree is full recursively.
* @tree: A pointer to the root node of the tree to check.
*
* Return: If tree is not full, 0.
*         Otherwise, 1.
*/
int is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (1);

if (((tree->left && tree->right) || (!tree->left && !tree->right)) &&
is_full(tree->left) == 1 &&
is_full(tree->right) == 1)
return (1);

return (0);

}

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
