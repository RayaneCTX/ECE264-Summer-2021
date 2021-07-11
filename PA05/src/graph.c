////////////////////////////////////////////////////////////////////////////////
///                                graph.c                                   ///
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "graph.h"

Graph *alloc_graph(int numVertices) {
	/*
 	 * This function is not directly being graded, but you should implement
 	 * it stand-alone nonetheless. Simply allocate a Graph structure, 
 	 * populate it, and allocate it adjacency matrix. Return the address of
 	 * the allocated Graph on success, return NULL on failure. Your graph
 	 * reading function should probably call this function once it has
 	 * counted the number of vertices in the input file.
 	 */ 
}

void free_graph(Graph *graph) {
	/*
 	 * Just like with the allocation function above, this function is not
 	 * directly being graded, but you should implement it stand-alone
 	 * nonetheless. Simply free the heap memory allocated for a Graph
 	 * structure. Don't forget to free the memory for the adjacency matrix
 	 * as well, otherwise, there will be a memory leak! Use Valgrind to test
 	 * whether this function is successfully freeing all memory associated
 	 * with a given Graph structure.
 	 */
}

#if     !defined(GRADE_WRITE) && \
        !defined(GRADE_TRANSPOSE) && \
        !defined(GRADE_COMBINE)
Graph *read_graph_from_file(char const *filename)
{
	/*
 	 * 'filename' is the name of a file to read from. This file contains
 	 * data representing a graph. This function should allocate a graph
 	 * structure and populate it with the data from the input file. The
 	 * input file follows the format specified in the README. This function
 	 * should return the address of the allocated graph if it succeeds, NULL
 	 * otherwise.
 	 */
}
#endif // GRADE_READ

#if     !defined(GRADE_READ) && \
        !defined(GRADE_TRANSPOSE) && \
        !defined(GRADE_COMBINE)
bool write_graph_to_file(char const *filename, const Graph *graph)
{
	/*
 	 * 'filename' is the name of a file to write into. 'graph' is the graph
 	 * representation in dynamic memory of a valid graph. This function must
 	 * write the graph out into the file 'filename', following the format
 	 * specified by the README. Remember that edges should be sorted in
 	 * ascending order according to their source vertices first, and their
 	 * destination vertices second. This function should return true if it
 	 * succeeds, false otherwise.
 	 */
}
#endif // GRADE_WRITE

#if     !defined(GRADE_READ) && \
        !defined(GRADE_WRITE) && \
        !defined(GRADE_UNION)
bool transpose_graph(Graph *graph)
{
	/*
 	 * 'graph' is an exsting graph representation stored in dnyamic memory.
 	 * This function must compute the transpose of the graph in place,
 	 * meaning that the graph structure pointed to by 'graph' should be 
 	 * directly modified as a result of the transposition (and you should
 	 * not create a new graph structure). Transposing the graph essentially
 	 * means inverting all edges. This function should return true if it is
 	 * successful. It should return false otherwise. This function should
 	 * not leak any memory (whatever is allocated here must be freed by the
 	 * end of the function).
 	 */
}
#endif // GRADE_TRANSPOSE

#if     !defined(GRADE_READ) && \
        !defined(GRADE_WRITE) && \
        !defined(GRADE_TRANSPOSE)
Graph *combine_graph(Graph *first, Graph *second)
{
	/*
 	 * 'first' and 'second' are valid graph representations in dynamic
 	 * memory. This function must compute the union of the two graphs,
 	 * such that the resulting graph contains the union of all edges in
 	 * both input graphs. The resulting graph must be allocated on the heap
 	 * by this function. If successful, this function returns the address
 	 * of the new graph and frees the memory allocated for the two input
 	 * graphs. If failed, this function should not allocate any memory,
 	 * the two input graphs should not be freed or modified, and it should 
 	 * return NULL. You may assume that the two input graphs have the same 
 	 * set of vertices. This function is expected to leak the exact amount 
 	 * of memory required to allocate one graph structure (when it 
 	 * succeeds). No additional amoounts of memory may be leaked.
 	 */
}
#endif // GRADE_COMBINE
////////////////////////////////////////////////////////////////////////////////
///                                END OF FILE                               ///
////////////////////////////////////////////////////////////////////////////////
