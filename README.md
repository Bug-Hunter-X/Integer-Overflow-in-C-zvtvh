# Integer Overflow in C
This repository demonstrates an example of integer overflow in C. Integer overflow occurs when an arithmetic operation attempts to create a numeric value that is outside of the range that can be represented with a given number of bits. 

## Bug Description
The `bug.c` file contains a simple C program that increments an integer variable.  This increment is performed repeatedly using a loop, which eventually causes an integer overflow. The overflow condition occurs silently, which makes debugging difficult. 

## Bug Solution
The solution is shown in `bugSolution.c`. This example shows how to avoid integer overflow by using appropriate data types and checking for potential overflow before the arithmetic operation is performed.  This can be done by comparing the result of the operation against the maximum and minimum values for the data type.