# Practical 6

The folder contains practical 6 codes. There are 3 .c files and 2 methods to exceute these.

## Method 1. matrixmul.c
This code contains logic for matrix multiplication without using functions

## Method 2. main.c
   matmul.c
These codes contains matrix multiplication using functions, matmul.c contains logic of matrix multiplication whereas main.c contains 
Intialization, declaration, input/output statements and function definition.


## Compile

1. To complile the method 1 
* gcc matrixmul.c -o matmulC -lm

OR

2. To compile the method 2
*gcc main.c matmul.c -o matmultC

## Exceute
1. To execute the method 1 
* ./matmul

This is the matrix A
0.00 1.00 2.00
1.00 2.00 3.00
2.00 3.00 4.00
3.00 4.00 5.00
4.00 5.00 6.00
This is the matrix B
0.00 -1.00 -2.00 -3.00
1.00 0.00 -1.00 -2.00
2.00 1.00 0.00 -1.00
This is the matrix C
5.000 2.000 -1.000 -4.000
8.000 2.000 -4.000 -10.000
11.000 2.000 -7.000 -16.000
14.000 2.000 -10.000 -22.000

OR

2. To execute the method 2
* ./matmultC

This is the matrix A

0.00 1.00 2.00
1.00 2.00 3.00
2.00 3.00 4.00
3.00 4.00 5.00
4.00 5.00 6.00

This is the matrix B

0.00 -1.00 -2.00 -3.00
1.00 0.00 -1.00 -2.00
2.00 1.00 0.00 -1.00

This is the matrix C

5.000 2.000 -1.000 -4.000
8.000 2.000 -4.000 -10.000
11.000 2.000 -7.000 -16.000
14.000 2.000 -10.000 -22.000