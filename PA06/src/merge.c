////////////////////////////////////////////////////////////////////////////////
///                                  merge.c                                 ///
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>  
#include <stdlib.h> 
#include <stdbool.h>

#include "merge.h"

#if     !defined(GRADE_WRITE) && \
        !defined(GRADE_MERGE) && \
	!defined(GRADE_MERGE_SORT)
bool read_data(char const *filename, int **arr, int *size)
{
	/*
 	 * 'filename' is the name of the input file, formatted just like the
 	 * input files in PA03. You will need to calculate the number of 
 	 * integers in the input file and alloacte the appropriate array size
 	 * on the heap for '*arr'. Return true if successful, false otherwise. 
 	 */
}
#endif


#if     !defined(GRADE_READ) && \
        !defined(GRADE_MERGE) && \
	!defined(GRADE_MERGE_SORT)
bool write_data(char const *filename, int const *arr, int size)
{
	/*
 	 * 'filename' is the name of the output file, formatted just like the
 	 * output files in PA03. Simply write the integers from 'arr' into the
 	 * output file. Return true if successful, false otherwise.
 	 */
}
#endif


#if     !defined(GRADE_READ) && \
        !defined(GRADE_WRITE) && \
	!defined(GRADE_MERGE_SORT)
void merge(int *arr, int l, int m, int r)
{
	/*
 	 * This function takes the two sorted regions with indices [l, m) and 
 	 * [m, r) and merges them together into the sorted region [l, r). This
 	 * function does not need to be recursive.
 	 */
}
#endif

#if	!defined(GRADE_READ) && \
	!defined(GRADE_WRITE) && \
	!defined(GRADE_MERGE)
void merge_sort(int *arr, int l, int r)
{
	/*
 	 * This function is recursive. This goal is to sort the region [l, r)
 	 * of the original array 'arr'. Of course, initially, 'l' and 'r' should
 	 * be zero and the size of the original array respectively. To sort, you
 	 * should split the region down the middle, make recursive calls to
 	 * merge_sort() on both halves, and then merge the sorted havles with a
 	 * call to merge().
 	 */
}
#endif
////////////////////////////////////////////////////////////////////////////////
///                                END OF FILE                               ///
////////////////////////////////////////////////////////////////////////////////
