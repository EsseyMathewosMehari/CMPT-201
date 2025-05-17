/*----------------------------------
 * Written by: ...
 * For: CMPT 201, ...
 * Lab instructor: ...
 * Lecture instructor: ...
 * Program purpose: This program does some simple array
 * manipulation, using 2 modules, numMod and numArray.
 * ----------------------------------*/

#include <stdio.h>
#include <math.h> /*so we need to link the math library*/
#include "numArray.h"
#include "numMod.h"

int main(void) {
    int input[5], size = 5, option[5], temp;
    double result;

    printf("******Array Manipulation Program******\n");
    /*call the array filling function */
    numFill(input, size);

    /* do some manipulations on the arrays */
    zapArray(option, size);
    sumArray(input, option, size);

    temp = sumLinear(input, size);
    /*math stuff!*/
    result = sqrt(temp);
    result = ceil(result);

    /*make new number for sure a valid index */
    temp = (int) result % size;

    sumArrayIndex(input, option, size, temp);

    /*print out the result array*/
    numPrint(input, size);

    return 0;
}
