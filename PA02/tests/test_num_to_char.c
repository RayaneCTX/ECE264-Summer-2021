////////////////////////////////////////////////////////////////////////////////
//                            test_num_to_char.c                              //
////////////////////////////////////////////////////////////////////////////////

/**
 * This file contains the unit tests for the convert_num_to_char function. Fill
 * in the test functions with TEST_CHECK and TEST_MSG calls to thoroughly test
 * your functions out.
 */

#include <stdio.h>

#include "acutest.h"
#include "string.h"
#include "../src/convert.h"

void test_invalid_input()
{
	// Test your convert_num_to_char function with invalid inputs
	// (e.g. 36, which is not representable by a letter in any base from
	// 2 to 36).
}

void test_0_to_9()
{

}

void test_a_to_z()
{

}

TEST_LIST = {
  { "test_invalid_input", test_invalid_input },
  { "test_0_to_9", test_0_to_9 },
  { "test_a_to_z", test_a_to_z },
  { NULL, NULL }
};
////////////////////////////////////////////////////////////////////////////////
//                                END OF FILE                                 //
////////////////////////////////////////////////////////////////////////////////
