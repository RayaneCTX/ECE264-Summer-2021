# Programming Assignment IX

*Last modified: 07/29/2021 at 11:30PM*

## Goals

* To get you familiarized with working with bitwise operations in a practical setting.

## Structure

Same as always. All of your source code should go in bitmap.c. All of your unit testing code should go in
test_alloc_bits.c and test_free_bit.c.

## Background

The background for the problem you are solving has been extensively defined and discussed in lecture. Make sure you base
your work off of that. You will find that, having watched the lectures, the code you must write for this assignment is
very similar. The only difference is described in the comment within bitmap.c.

## Examples

Say your bitmap currently stores the bits
```
11100010010000...0000
```

Then, calling `alloc_bits(3)` will result in the bitmap
```
11111110010000...0000
```
and return 3. Calling `alloc_bits(3)` again will result in
```
11111110011110...0000
```
and return 10. Notice that the first two zeros are skipped over. The allocation was for 3 bits,
thus 3 consecutive free bits need to be found.

## Requirement

You must implement the `alloc_bits` and `free_bit` functions in bitmap.c. Read the comments in that file, then write your code
based off of lectures.

## Submission

Compress your bitmap.c file as follows:
```
zip bitmap.zip bitmap.c
```
Then submit it in the appropriate submission box in Brightspace.
