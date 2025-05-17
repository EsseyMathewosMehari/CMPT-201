/*----------------------------------
 * Written by: ...
 * For: CMPT 201, ...
 * Lab instructor: ...
 * Lecture instructor: ...
 * Module purpose: The functions perform simple array manipulations.
 * ----------------------------------*/

#include <stdio.h>
#include "numArray.h"

void numFill(int *nums, int size) {
    int i;

    /* if there is only one statement in the for loop, you don't need {} */
    for (i = 0; i < size; i++) {
        /* you must tell scanf what address to put the input at */
        scanf("%d", &nums[i]);
    }
}

void numPrint(int *nums, int size) {
    int i;

    /* if there is only one statement in the for loop, you don't need {} */
    for (i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    /* easier to read with lines ended */
    printf("\n");
}
