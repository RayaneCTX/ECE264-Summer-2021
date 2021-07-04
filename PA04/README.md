# Programming Assignment IV

## Goals

The goals of this assignments are:

* To get you familiar with C structs,

* To get you familiar with C dynamic memory management using `malloc()` and `free()`.

## Structure

The structure of the code for this assignment is as follows:

* `src` contains 3 files: `count_words.c` contains 4 functions you need to fill in.
`count_words.h` and `main.c` are already completed, and you should not modify them.

* `tests` contains a test file for each function you should implement.

## Background

### Structs

Struct is a user-define data type available in C that allows to combine
variables of different types into a single type.

### Dynamic Memory Allocation

Memory allocation is a process by which computer programs and services are
assigned with physical or virtual memory space.
In general, the memory is allocated either statically (at compile time by declaring variables),
or dynamically (at runtime by calling `malloc()` and `free()`).
See [this page](https://www.gnu.org/software/libc/manual/html_node/Memory-Allocation-and-C.html#Dynamic-Memory-Allocation)
for more information on C memory allocation.

## Requirements

This homework requires you to count word frequency of a input file,
and print the word counts in descending order.
Which words to count is specified by a "vocabulary" file.
See the following example:

1. Assume the following vocabulary file and input file:

    <p align="center">
        <img src="readme_figs/1.png" width="300"/>
    </p>

1. Create an array of `WordCount`s
(referred to as "counter array" in the rest of this document)
according to the vocab file:

    <p align="center">
        <img src="readme_figs/2.png" width="400"/>
    </p>

1. Then, look at each word in the input file.
If the word exists in the counter array, increment its corresponding counter.
Eventually, the counter will look like:

    <p align="center">
        <img src="readme_figs/3.png" width="400"/>
    </p>

1. Sort the counter array by its count.
It two words have the same count, the alphabetically smaller word should go before.

    <p align="center">
        <img src="readme_figs/4.png" width="400"/>
    </p>

1. Now that the counter array is sorted, print each word and its count:
    ```
    the 2
    dog 1
    fox 1
    ```

You need to implement the following functions:

| Function | Input | Output/Effect |
|-|-|-|
| `makeCounterArr()` | - `char *vocab_file`: path to a vocabulary file (input)<br>- `WordCount **wc`: pointer to a `WordCount*` variable that will hold the newly created counter array (output)<br>- `int *len`: pointer to an `int` that will hold the length of the counter array (output) | - Read the vocabulary file, assuming each line is a word. You can assume there is no duplicate words in the vocabulary file.<br>- Allocate a `WordCount` array with length equal to the number of words in the vocabulary. The array elements correspond to words in the vocabulary, in the order they appear in the vocabulary file.<br>- For each `WordCount` array element, its `word` field should hold the corresponding word, and its `count` field should be initialized to 0.- Assign the newly created array to `*wc` , and assign the array's length to `*len`.<br>- Return `false` if anything fails. Otherwise, return `true`. |
| `countWords()` | - `char *input_file`: path to a file<br>- `WordCount *word_counter_arr`: a counter array used to store the word counting results. You can assume all counters are initialized to 0. | - Read each word in the `input_file`. Note that the file might have multiple lines.<br>- For each word, if the word is in the counter array, increment its corresponding `count` by 1.<br>- The counter is case sensitive, e.g. you can assume "Hello" and "hello" are two different words. Words will not span across lines.<br>- Return `false` if anything fails. Otherwise, return `true`. |
| `printWordsDescendingFreq()` | - `WordCount *wc`: a counter array containing word count results | - Print each word and its count in decreasing count order. For words that have the same count, the alphabetically smaller word should go before.<br>- Each line should correspond to a word and look like `<word> <count>`.<br>- Return `false` if anything fails. Otherwise, return `true`.<br>(Hint: think about using `qsort()` like you did in PA03) |
| `destroyCounterArr()` | - `WordCount *wc`: a counter array to be freed | - Free the memory of `wc`<br>- Return `false` if anything fails. Otherwise, return `true`. |


## Compiling and Linking

You should adapt the example Makefile template on Brightspace to compile and run your code.

## Testing your code

There is a unit testing file for each function to be implemented:

* `test_make_counter_arr.c`

* `test_count_words.c`

* `test_print_words_descending_freq.c`

Each of the test files contains multiple unit test functions,
and each unit test function covers a specific input scenario.
**Test cases within each test function are not sufficient**,
so you should add additional test cases to the unit test functions.

## Submission

Navigate to the src directory where you `count_words.c` file is, and compress it with:

```
zip count_words.zip count_words.c
```

Then, upload the zip file to Brightspace in the appropriate submission box.