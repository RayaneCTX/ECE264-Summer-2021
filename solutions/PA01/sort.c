#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#include "sort.h"

#define ALPHABET_SIZE 26


bool is_pair_ordered(char first, char second, char const * alphabet)
{
	if ( tolower(first) == tolower(second) ) {
		if ( islower(first) && isupper(second) ) {
			return false;
		} else {
			return true;
		}
	}

	for(int i = 0; i < ALPHABET_SIZE; i++) {
		if ( alphabet[i] == tolower(second) && alphabet[i] != tolower(first) ) {
			return false;
		} else if ( alphabet[i] == tolower(first) ) {
			return true;
		}
	}

	return true;
}


void swap(char * first, char * second)
{
	char temp = *first;
	*first = *second;
	*second = temp;
}


#ifndef GRADE_SORT
bool check_lexicographical_order(char const * phrase, char const * alphabet)
{
	for ( int i = 0; i < (int) strlen(phrase) - 1; i++ ) {
		int j = i + 1;
		if ( ! is_pair_ordered(phrase[i], phrase[j], alphabet) ) {
			return false;
		}
	}
	return true;
}
#endif // GRADE_SORT undefined


#ifndef GRADE_CHECK
void sort_lexicographically(char * phrase, char const * alphabet)
{
	for ( int i = 0; i < (int) strlen(phrase) - 1; i++ ) {
		for ( int j = i + 1; j < (int) strlen(phrase); j++ ) {
			if ( ! is_pair_ordered(phrase[i], phrase[j], alphabet) ) {
				swap(&phrase[i], &phrase[j]);
			}
		}
	}
}
#endif // GRADE_CHECK undefined
