/*----------------------------------
 * Written by: ...
 * For: CMPT 201, ...
 * Lab instructor: ...
 * Lecture instructor: ...
 * Module purpose: The functions perform simple array manipulations.
 * ----------------------------------*/

#include "numMod.h"

void zapArray(int *nums, int size) {
    int i;

    /* if there is only one statement in the for loop, you don't need {} */
    for (i = 0; i < size; i++) {
        /*set the current element to 3*/
        nums[i] = 3;
    }
}

void sumArray(int *num1, const int *num2, int size) {
    int i;

    for (i = 0; i < size; i++) {
        num1[i] = num1[i] + num2[i];
    }
}

void sumArrayIndex(int *num1, const int *num2, int size, int index) {
    int i;

    for (i = index; i < size; i++) {
        num1[i] = num1[i] + num2[i];
    }
}

int sumLinear(const int *nums, int size) {
    int i, sum = 0;

    for (i = 0; i < size; i++) {
        sum += nums[i];
    }
    return sum;
}
