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

  return (binary_tree_is_full(tree) && binary_tree_balance(tree) == 0)
}
