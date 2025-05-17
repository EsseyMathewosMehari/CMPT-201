/*----------------------------------
 * Written by: ...
 * For: CMPT 201, ...
 * Lab instructor: ...
 * Lecture instructor: ...
 * Module purpose: The functions perform simple array manipulations.
 * ----------------------------------*/

#ifndef NUMARRAY_H
#define NUMARRAY_H

/* Purpose: This function fills an array of integers with user input
 *     with integer numbers by user input.
 * Parameters: nums: array of integers
 *             size: length of the array
 * Precondition: array must have a length of size
 * Post condition: array is filled with user input.  */
void numFill(int *nums, int size);

/* Purpose: This function prints an array of integers
 * Parameters: nums: array of integers
 *             size: length of the array
 * Precondition: array must have a length of size
 * Post condition: array is printed.  */
void numPrint(int *nums, int size);

#endif /* NUMARRAY_H */
