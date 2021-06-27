#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "sort.h"

#define ALPHABET "abcdefghijklmnopqrstuvwxyz"  

int main()
{
	// Test with empty phrase
	char phrase[] = "";
	sort_lexicographically(phrase, ALPHABET);
	printf("Output: %s\n", phrase);

	// Test with single character phrase
	char phrase2[] = "A";
	sort_lexicographically(phrase2, ALPHABET);
	printf("Output: %s\n", phrase2);	

	return EXIT_SUCCESS;
}
