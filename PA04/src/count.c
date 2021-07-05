////////////////////////////////////////////////////////////////////////////////
//                                  count.c                                   //
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "count_words.h"


#ifndef !defined(GRADE_COUNT_WORDS) &&
        !defined(GRADE_PRINT_WORDS) &&
        !defined(GRADE_FREE_WORDS)
bool alloc_count_array(char *vocabFile, WordCount **countArray, int *size)
{
  /*
   * Read the vocabulary file 'vocabFile' and allocate an array of WordCount
   * structures of length equal to the number of words in the file using malloc.
   * The address of the allocation should be stored in '*countArray', and its
   * size should be stored in '*size'. Return false if any error occurs, true
   * otherwise.
   */
}
#endif // GRADE_ALLOC_WORDS (essentially)


#ifndef !defined(GRADE_ALLOC_WORDS) &&
        !defined(GRADE_PRINT_WORDS) &&
        !defined(GRADE_FREE_WORDS)
bool count_words_from_file(char *inputFile, WordCount *countArray, int size)
{
    /*
     * Read 'inputFile' and count the number of occurrences of words into the
     * corresponding entries in 'countArray'. The input file may have multiple
     * lines. Words are case sensitive. Words will not span multiple lines.
     * Return false if an error occurs, true otherwise.
     */
}
#endif // GRADE_COUNT_WORDS (essentially)


#ifndef !defined(GRADE_ALLOC_WORDS) &&
        !defined(GRADE_COUNT_WORDS) &&
        !defined(GRADE_FREE_WORDS)
bool print_words_descending_freq(WordCount *countArray, int size)
{
    /*
     * Print "<word> <count>" (excluding the double quotes), one word per line,
     * to the console, in descending order of frequency first, alphabetical
     * order second. This function will have sort the array (you should use
     * qsort for this purpose). Return false if any error occurs, return true
     * otherwise.
     */
}
#endif // GRADE_PRINT_WORDS (essentially)


#ifndef !defined(GRADE_ALLOC_WORDS) &&
        !defined(GRADE_COUNT_WORDS) &&
        !defined(GRADE_PRINT_WORDS)
bool free_count_array(WordCount *countArray)
{
    /*
     * Free the memory allocated to the count array.
     */
}
#endif // GRADE_FREE_WORDS (essentially)
////////////////////////////////////////////////////////////////////////////////
//                                 END OF FILE                                //
////////////////////////////////////////////////////////////////////////////////
