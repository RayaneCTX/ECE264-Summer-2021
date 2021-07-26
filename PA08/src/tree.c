////////////////////////////////////////////////////////////////////////////////
///                                  tree.c                                  ///
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#include "tree.h"

TreeNode *alloc_tree_node(int value)
{
	// Nothing special to be said here. Business as usual.
}

void free_tree_node(TreeNode *node)
{
	// Nothing special to be said here either.
}

Tree *alloc_tree(int numNodes, int depth, TreeNode *root)
{
	// Meh.
}

#if !defined(GRADE_BUILD) && !defined(GRADE_PRINT)
void free_tree(Tree *tree)
{
	// Use recursion. Be careful to not access a memory location after
	// freeing it. Use Valgrind extensively to test this function out.
	// Always debug the first Valgrind error before any other. Pay
	// attention to your memory leaks. You should create a helper
	// function that is recursive and have this function call it.
}
#endif

#if !defined(GRADE_FREE) && !defined(GRADE_PRINT)
Tree *build_tree_from_files(char const *preOrderFile, char const *inOrderFile)
{
	// This function is the meat of the assignment really. Be careful, it's
	// gonna get big quick. You need to split up functionality in several
	// helper functions to maintain your sanity. To verify that the function
	// works properly, you should be writing thorough unit tests. However,
	// at the beginning, you'll want to rely on GDB. Spend some time getting
	// comfortable navigating complex data structures (such as binary trees)
	// using GDB. It's a very useful skill. Anyways, remember that this is
	// engineering: split the problem up into manageable, smaller problems,
	// and tackle each one one by one.
}
#endif

#if !defined(GRADE_FREE) && !defined(GRADE_BUILD)
void print_path_from_root_to_node(Tree *tree, int value)
{
	// Figuring out how to print the path in the correct order is the
	// challenge here. I suggest making use of the parent attribute
	// added to the tree node structure in tree.h.
}
#endif
////////////////////////////////////////////////////////////////////////////////
///                                END OF FILE                               ///
///////////////////////////////////////////////////////////////////////////////
