////////////////////////////////////////////////////////////////////////////////
///                                  list.c                                  ///
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "list.h"

/*
 * The documentation for the functions to be defined in this file appears in
 * list.h. Note that only the function definitions with preprocessor guards
 * around them will be graded. You may use the print_list() function for
 * debugging convenience in some instances.
 */


Node *alloc_node(int value)
{

}


void free_node(Node *node)
{

}


void print_list(Node *head)
{

}


#if   !defined(GRADE_INSERT_TAIL) &&	\
      !defined(GRADE_LENGTH) && 	\
      !defined(GRADE_FREE_LIST) && 	\
      !defined(GRADE_CREATE) && 	\
      !defined(GRADE_ELIMINATE)
Node *insert_node_at_head(Node *head, Node *node)
{

}
#endif


#if   !defined(GRADE_INSERT_HEAD) && 	\
      !defined(GRADE_LENGTH) && 	\
      !defined(GRADE_FREE_LIST) && 	\
      !defined(GRADE_CREATE) && 	\
      !defined(GRADE_ELIMINATE)
Node *insert_node_at_tail(Node *head, Node *node)
{

}
#endif


#if   !defined(GRADE_INSERT_HEAD) && 	\
      !defined(GRADE_INSERT_TAIL) && 	\
      !defined(GRADE_FREE_LIST) && 	\
      !defined(GRADE_CREATE) && 	\
      !defined(GRADE_ELIMINATE)
int get_list_length(Node *head)
{

}
#endif


#if   !defined(GRADE_INSERT_HEAD) &&	\
      !defined(GRADE_INSERT_TAIL) && 	\
      !defined(GRADE_LENGTH) && 	\
      !defined(GRADE_CREATE) && 	\
      !defined(GRADE_ELIMINATE)
void free_list(Node *head)
{

}
#endif
////////////////////////////////////////////////////////////////////////////////
///                                END OF FILE                               ///
////////////////////////////////////////////////////////////////////////////////
