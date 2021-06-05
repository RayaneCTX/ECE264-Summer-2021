# Programming Assignment I

*Last modified: 06/05/2021 at 1:49AM*

## Setup

To download this assignment onto your ecegrid machine, run:
```
git clone https://github.com/RayaneCTX/ECE264-Summer-2021.git
```
This will create a directory named **ECE264-Summer-2021**. Do not modify its name or anything inside. Doing so can complicate the process of downloading any updates to this assignment. Specifically, do not start working on the assignment from inside that directory. First, create a copy of the directory with
```
cp -R ECE264-Summer-2021 <copy name>
```
where `<copy name>` is any name you want (e.g. `Work`, `PAs`, etc.), then do your work inside that copy:
```
cd <copy name>
cd src
vim sort.c
```
Before you start writing code however, please read through the rest of this document. In the case where we have to make modifications to the provided code on this repository, you'll need to update your local repository. Navigate to your local git repository (it'll probably be the directory named **ECE264-Summer-2021**), and from there, run:
```
git pull
```
to pull all changes. You may then use `git diff` to find out what the changes where. The changes we make in these instances will never be significant enough that it forces you to re-write code.

## Goals

The goals of this assignment are:

* To help you become comfortable with your programming environment,
* To motivate you to review the fundamentals of programming,
* To gently introduce you to project management and unit testing.

## Structure

The provided code is organized as follows:

* **src**: This directory contains all the source code for this assignment (excluding unit testing code). Specifically, the code you are required to write for this assignment will go into **sort.c** (where you will find two functions to be defined completely). The file **sort.h** contains the declarations of the functions you are defining in **sort.c** (ignore its contents for now). The file **main.c** defines a `main()` function. Right now, it's empty. As you write your code in **sort.c**, you'll want to test it out by writing some test code in `main()`, compile **sort.c** and **main.c** together, and run the executable (more details in the **How do I start?** section).
* **tests**: This directory contains all the unit testing source code for this assignment. Ignore the contents of these files for now. Just for this assignment, we have provided a complete unit testing suite that you will be able to use easily to make sure your code is correct (more details in the **Testing** section).
* **Makefile**: The Makefile defines how we want make to manage our files (ignore its contents for now).

## Background

Part of this assignment requires you to implement selection sort to sort the elements of an array into a specified order. Visit [the Wiki page on selection sort](https://en.wikipedia.org/wiki/Selection_sort) and refresh your knowledge on how this simple algorithm operates. Note that the C code provided on the Wiki page assumes that the array to be sorted stores integer values. Your task will be to adapt this code to make it work for the arrays you are required to sort in this assignment.

## Requirements

For this assignment, you are required to implement two function: `check_lexicographical_order()` and `sort_lexicographically()`. The requirements for each are defined in the subsections below. Notice the presence of the following preprocessor blocks around the functions:
```
#ifndef TEST_CHECK
  ...
#endif
```
DO NOT REMOVE THESE!

### Check Lexicographical Order

#### Declaration

`bool check_lexicographical_order(char const * phrase, char const * alphabet)`

#### Description

This function verifies that the provided phrase is in lexicographical order, as determined by the provided alphabet.

#### Return Value

This function returns true if the phrase is in lexicographical order. It returns false otherwise.

#### Input

* `phrase`: A C string (with a null terminator at the end). You may assume that each character in the string is one of the 26 letters of the English alphabet, either capitalized or not.
* `alphabet`: A C string. You may assume that the string will be exactly 26 characters long (excluding the null terminator) and contain exactly one instance of each of the 26 letters of the English alphabet, in lower case.

Essentially, you may assume that the inputs to the function are valid and you do not need to check for validity of the input inside the function.

#### Special Rules

Capitalized letters take precedence over their corresponding lower case letters. Thus, `"Aa"` is sorted (regardless of the alphabet), but `"aA"` is not. Assume that an empty input phrase is sorted by default.

#### Examples

* `check_lexicographical_order("aBc", "abcdefghijklmnopqrstuvwxyz")` should return true,
* `check_lexicographical_order("Hello World", "abcdefghijklmnopqrstuvwxyz")` should return false,
* `check_lexicographical_order("qweRtY", "qwertyuiopasdfghjklzxcvbnm")` should return true,
* `check_lexicographical_order("ytrewq", "qwertyuiopasdfghjklzxcvbnm")` should return false.

You'll find many more examples in the provided unit test source file for this function.

### Sort Lexicographically

#### Declaration

`void sort_lexicographically(char * phrase, char const * alphabet)`

#### Description

This function sorts the provided phrase in lexicographical order, as determined by the provided alphabet.

#### Return Value

This function has no return value.

#### Input

* `phrase`: A C string (with a null terminator at the end). You may assume that each character in the string is one of the 26 letters of the English alphabet, either capitalized or not.
* `alphabet`: A C string. You may assume that the string will be exactly 26 characters long (excluding the null terminator) and contain exactly one instance of each of the 26 letters of the English alphabet, in lower case.

Again, no input checking is required.

#### Special Rules

Capitalized letters take precedence over their corresponding lower case letters. Thus, `"Aa"` is sorted (regardless of the alphabet), but `"aA"` is not.

#### Examples

* `sort_lexicographically("Hello World", "abcdefghijklmnopqrstuvwxyz")` should sort the phrase into `"deHllloorW"`,
* `sort_lexicographically("Hello World", "qwertyuiopasdfghjklzxcvbnm")` should sort the phrase into `"WeroodHlll"`.

## Grading

To grade this assignment, we will use the exact same unit test suite as is provided to you (only for this assignment). When you look into the unit test source files (**test_check_lexicographical_order.c** and **test_sort_lexicographically.c**), you'll notice that the unit test for each function is divided into test functions which are named according to what they are testing. Each one is a test case your code either passes or fails. All of them will be weighted the same for this assignment. To summarize, pass all test cases provided in the unit test suite and you will get 100% on this assignment.

## How do I start?

Once you have copied over the **PA01** directory and are ready to work on it, navigate to the **src** directory:
```
cd src
```
and open the **sort.c** and **main.c** files. The following command will open both of them in Vim in split screen:
```
vim -O sort.c main.c
```
Write your code. You should start with the check function, since, once you know it works, you can use it to verify that the sort function works. As you write code in **sort.c**, write code in **main.c** that calls your functions and tests your code. To compile your code, use:
```
gcc -std=c11 -g -Wall -Wextra -Werror main.c sort.c
```
Remember that this produces and executable with the name **a.out**. To give it another name, say **pa01**, use:
```
gcc -std=c11 -g -Wall -Wextra -Wvla -Werror main.c sort.c -o pa01
```
Assuming the above compiles your code without errors, you may run your code:
```
./a.out
```
Repeat the process until you are satisfied with your work.

## Compiling and Linking

You are required to use the GCC flags `-Wall -Wextra -Wvla -Werror`. We will use these flags to compile your code for grading purposes. If your code does not compile, we cannot grade it.

## Testing Your Code

As described in the **How do I start?** section, you'll initially be writing test code inside of **src/main.c**. Eventually, you'll want to start running the provided unit tests. To do so, navigate to the directory where the provided Makefile is, and run:
```
make run-test-check
```
to run the unit test for the check function. Once all test cases pass for that function, run:
```
make run-test-sort
```
to test the sort function. Once all provided test cases pass, you can be confident that you will earn 100%. Make sure your code compiles with the required GCC flags!

## Submission

Navigate to the **src** directory where you **sort.c** file is, and compress it with:
```
zip sort.zip sort.c
```
Then, upload the **sort.zip** file to Brightspace in the appropriate submission box.
