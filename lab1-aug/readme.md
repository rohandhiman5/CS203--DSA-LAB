**HERE are the problems 
Problems
1. Harry gives Jenny an array of integers. Her challenge is to find an element
of the array such that the sum of all elements to the left is equal to the
sum of all elements to the right. Note that if the element returned is in
the start position of the array, then its sum on the left will be 0. If the
element returned is in the end position of the array, the sum in the right
will be 0.
Example:
1) Input: Given array A=[11,4,6,5]
Output: Index 1, element 4, (Reason Summation A[0]=A[2]+A[3])
2) Input: Given array A=[1,2,3]
Output: Null (No such number found)
Run for the following test cases:
a. A=[1,1,4,1,1]
b. A=[2,0,0,0]
c. A=[1,0,2,1,-2]

1

d. A=[1,2,0,4,5]
e. A=[-2,-2,8,-3,-5,-1,5,0,0]

2. Check allocation of 2-D array in C++. Given a 6x6 2D array A. For ex-
ample A is

1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
An hourglass in A is a subset of values with indices falling in this pattern
in A’s graphical representation:
a b c
d
e f g

There are 16 hourglasses in A . An hourglass sum is the sum of an hour-
glass’ values. Calculate the hourglass sum for every hourglass in A, then

print the maximum hourglass sum. The array will always be 6x6. In the
above example output will be
7 4 2 0
2 2 0 0
3 2 1 0
0 0 0 0
Maximum is 7.
Explanation of maximum hourglass:
1 1 1
1
1 1 1
Test cases:
(i)
1 2 3 1 1 -1
2 0 3 0 0 -1
3 2 3 1 0 -2
0 0 0 1 0 -2
0 3 3 1 1 -1
0 2 3 0 1 -1
(ii)
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0

2

0 0 1 2 4 0
Hint for (ii):

Figure 1: Caption

3. Consider an array A=[-23, -13, -3, 8, 18, 28, 39, 49, 59, 70, 80, 90, 101,
111, 121, 132, 142, 152, 163, 173, 183, 194, 204, 214, 225, 235, 245, 256,
266, 276, 287, 297, 307, 318, 328, 338, 349, 359, 369, 380, 390, 400, 411,
421, 431, 442, 452, 462, 473, 483, 493, 504, 514, 524, 535, 545, 555, 566,
576, 586, 597, 607, 617, 628, 638, 648, 659, 669, 679, 690, 700, 710, 721,
731, 741, 752, 762, 772, 783, 793, 803, 814, 824, 834, 845, 855, 865, 876,
886, 896, 907, 917, 927, 938, 948, 958, 969, 979, 989, 1000]
(i) Search for the element 56 in A, and return the index
(ii) Search for the element 793 in A, and return the index
Use linear search and binary search for both (i) and (ii). Return the time
taken for both linear search and binary search for problems (i) and (ii).
Check this tutorial on how to measure execution time of a code snippet
in C++
(Optional: Try (i) and (ii) with sorted array of size 1000 and 10000 and
see the run time difference.
Input files: 1000.txt, 10000.txt
Use file operation, download the two files from the link, read input from
these 2 files and populate your array.)
