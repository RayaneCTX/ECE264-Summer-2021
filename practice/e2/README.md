# Practice Problem for Exam II

*Last modified: 07/18/2021 at 4:15PM*

## Overview

In this problem, you are tasked with implementing a simple library for a sorted linked list that has two functionalities: `insert_sorted()` and `extract_sublist()`.
You will be graded on the functionality of your code, as well as your unit testing suite and your Makefile.

## Functionality

#### `Node *insert_sorted(Node *head, Node *node)`

Assume that `head` is a pointer to the head of a sorted linked list in ascending order (may be empty). `node` should be inserted in the list such that the
ascending order is maintained. Return the address of the head of the list upon completion.

#### `void extract_sublist(Node **head, Node **extracted, int lowerBound, int upperBound)`

Assume that `*head` is the address of a sorted linked list in ascending order (may be empty). `*extracted` is a pointer to a linked list allocated by the
caller of this function. Assume `lowerBound < upperBound`. This function should scan the list pointed to by `*head` and remove all nodes whose value attribute falls
between `lowerBound` and `upperBound` (inclusive). The removed nodes are then linked into their own sorted linked list, and the address of the head of the new list
is stored at `*extracted`. If no node were extracted, `*extrcated` should be `NULL`.

## Makefile

You will need to submit a Makefile that we can use to run your unit tests on your code. The only requirements are that running the unit tests for one function
should require only one make command, and that only source files that have been changed are re-compiled by make, not the whole program every time. Adapting a 
template Makefile from a previous assignment will do the trick.

## Unit Testing

You will need to write an exhaustive unit testing suite for your two functions using the acutest framework (provided under the tests directory).

## Submission

First, navigate to the parent directory of e2, and run
```
zip -r e2.zip e2
```
The -r argument means recursive compression, so that everything inside of the e2 directory (the src and tests directories) are compressed and added
to the archive. Before submitting, move the .zip file to its own directory and unzip it there to make sure it includes everything you want (source code, Makefile, unitests, etc.). Submit the .zip file on Brightspace.
