#include <stdio.h>
#include <stdlib.h>
// Include anything else you need here...

#include "sum.h"

/**
 * A little function you can use in your testing code to check
 * whether two files are the same. Note that 'diff -wB' is called
 * to perform the comparison (more information at 'man diff'). The
 * flags -wB specify that white-spaces and blank lines do not count
 * as differences. Returns 0 if the two files are the same, returns
 * non-zero otherwise.
 */
int diff(fname1, fname2) {
  	char command[256];
  	sprintf(command, "diff -wB \"%s\" \"%s\"", fname1, fname2);
	return system(command);
}

int main()
{
	// Use this file for testing, i.e. call sum() and then call
	// diff() to compare the output file to some expected file
	// that you manually wrote.
	//
	// If you prefer to use acutest.h, use that. You don't need
	// to do both.
}
