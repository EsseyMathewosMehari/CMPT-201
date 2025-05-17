/*----------------------------------
 * Written by: ...
 * For: CMPT 201, ...
 * Lab instructor: ...
 * Lecture instructor: ...
 * Module purpose: The functions perform simple array manipulations.
 * ----------------------------------*/

#ifndef NUMMOD_H
#define NUMMOD_H

/* Purpose: This function fills an array with 3's
 * Parameters: nums: array of integers
 *             size: length of the array
 * Precondition: array must have a length of size
 * Post condition:  array values are all set to 3.  */
void zapArray(int *nums, int size);

/* Purpose: This function sums two arrays together
 * Parameters: num1, num2: arrays of integers
 *             size: length of the arrays
 * Precondition: both arrays must have a length of size
 * Post condition: each position in the first array is changed to
 *     the sum of the corresponding elements of both arrays.  */
void sumArray(int *num1, const int *num2, int size);

/* Purpose: This function sums two arrays size together, starting from an index
 * Parameters: num1, num2: arrays of integers
 *             size: length of the arrays
 *             index: starting point for array summation
 * Precondition: both arrays must have a length of size
 * Post condition: each position in the first array is changed to
 *     the sum of the corresponding elements of both arrays, starting at index.  */
void sumArrayIndex(int *num1, const int *num2, int size, int index);

/* Purpose: This function returns the sum of the numbers in an array
 * Parameters: nums: array of integers
 *             size: length of the array
 * Return: sum of the elements in the array
 * Precondition: array must have a length of size
 * Post condition: the function returns the sum of the elements in the array  */
int sumLinear(const int *nums, int size);

#endif /* NUMMOD_H */
