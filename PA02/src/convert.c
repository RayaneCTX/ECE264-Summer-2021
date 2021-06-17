////////////////////////////////////////////////////////////////////////////////
//                                 convert.c                                  //
////////////////////////////////////////////////////////////////////////////////

/**
 * THIS FILE CONTAINS BAD CODE! Your task in this assignment is to correct the
 * code in this file until the functions behave as desired. See the README.md 
 * for a complete description of what the requirements are for the functions.
 */

#include <stdio.h>
#include <string.h>

#include "convert.h"

int convert_char_to_num(char c) 
{
	if (c >= '0' && c <= '9')
    		return c - '0';
  	else if (c >= 'a' && c <= 'z')
    		return c - 'a';
  	else
    		return -1;  // -1 means invalid
}

char convert_num_to_char(int n) 
{
	if (n >= 0 && n <= 9)
    		return n + '0';
  	else if (n >= 10 && n <= 35)
    		return n + 'a';
  	else
    		return 0; // 0 means invalid
}

void convert_base(char * numStrRep, int inputBase, int outputBase)
{
	// First, we are going to convert the number into a base
	// ten integer value.
	int power = 1;
  	int num = 0;
  	int valLen = strlen(numStrRep);
	// Loop through each digit of the input number, starting with the
	// least significant digit.
	for (unsigned int i = valLen - 1; i >= 0; i--) {
    		int n = convert_char_to_num(numStrRep[i]);
		if (n == -1 || n >= inputBase) {
			fprintf(stderr, "[ERROR] %s: an error occurred.\n", __func__);
      			return;
    		}
		// Accumulate the converted digit multiplied with the
		// current base power into num.
		num += n * power;
		// Update the base power for the next digit to the left.
		power *= inputBase;
	}

	// Second, we are going to figure out what the maximum
	// divisor for our number is.
	int divisor = 1;
	while (num / (divisor * outputBase) > 0)
		divisor *= outputBase;
  
	// Third, we are going to divide our number by the divisor
	// to isolate each digit, starting with the most significant
	// digit.
  	while (divisor > 0) {
    		char ch = convert_num_to_char(num / divisor);
    		if (ch == 0) {
			fprintf(stderr, "[ERROR] %s: an error occurred.\n", __func__);
			return;
		}	
    		printf("%c", ch);
    		divisor /= outputBase;
  	}
	printf("\n");
}
////////////////////////////////////////////////////////////////////////////////
//                                END OF FILE                                 //
////////////////////////////////////////////////////////////////////////////////
