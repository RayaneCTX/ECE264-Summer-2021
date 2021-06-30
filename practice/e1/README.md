# Practice Problem for Exam I

*This is a practice problem for exam I. We will deliver exam I in almost exactly the same shape, so this should give you a good feel for what to expect.*
*The difficulty of this practice problem should be about equivalent to that of the actual exam, slightly on the easier side. Refer to the rubric*
*for this exam to know what you are being graded on.*

## Overview

This problem has you implement the `sum` function which reads integers from an input file, sums them up into a single integer, and write that integer
to an output file. You will be required to write appropriate tests.

## Specifications

The function `sum` that you must implement is found in sum.c with its declaration found in sum.h. You cannot change that declaration.

### Inputs

* `inputFileName`: a C string storing the name of the input file.
* `outputFileName`: a C string storing the name of the output file.

### Description

Open the input file, read the integers from it, accumulate them into a single integer, open the output file, write the accumulated integer into it.

### Return Value

The function returns true if it succeeds in reading all integers from the input file and writing the accumulated value into the output file. It returns false if it encounters any error while handling the files.

### File Format

Assume that the input file contains at most 100 integers, and assume that the accumulated value is always less than INT_MAX. There will be at most one integers per line. There could be any number of white-spaces or blank lines around the integers. Below are examples of valid input files.

```
1
3
5
6
```

```
1
   5
   
 4
2
```

## Compilation

Your code should be compiled as
```
gcc -std=c11 -g -Wall -Wextra -Werror <main.c/test.c> sum.c
```

## Testing

As the rubric will indicate, a significant portion of your grade will depend on the quality of your tests. To test your code, you have the option of using acutest or main.c. Either are acceptable, as long as the test cases are clearly visible. If you use acutest, you can use the macro TEST_TWO_FILES_EQUAL to compare two files (ignoring white-spaces and blank lines). If you use main.c, we have provided the `diff` function, documented in main.c.
