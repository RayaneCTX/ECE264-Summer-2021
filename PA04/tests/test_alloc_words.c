////////////////////////////////////////////////////////////////////////////////
//                            test_alloc_words.c                              //
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include "acutest.h"
#include "../src/count_words.h"

void test_nonexistent_file()
{

}

void test_vocab_file_with_one_word()
{

}

void test_vocab_file_with_multiple_words()
{

}

// Add more test cases below until you have a thorough test suite.

TEST_LIST = {
  { "test_nonexistent_file", test_nonexistent_file },
  { "test_vocab_file_with_one_word", test_vocab_file_with_one_word },
  { "test_vocab_file_with_multiple_words", test_vocab_file_with_multiple_words },
  { NULL, NULL }
};
////////////////////////////////////////////////////////////////////////////////
//                                 END OF FILE                                //
////////////////////////////////////////////////////////////////////////////////
