////////////////////////////////////////////////////////////////////////////////
///                                  tree.h                                  ///
////////////////////////////////////////////////////////////////////////////////
#ifndef __TREE_H__
#define __TREE_H__

/**
 * The binary tree node structure you are using here. No suprises.
 */
typedef struct treenode {
	int value;
	struct treenode *left;
	struct treenode *right;
} TreeNode;

/**
 * Count the number of paths that have even weights and return that value.
 */
int count_paths_with_even_weights(TreeNode *root);

#endif
////////////////////////////////////////////////////////////////////////////////
///                                END OF FILE                               ///
////////////////////////////////////////////////////////////////////////////////
