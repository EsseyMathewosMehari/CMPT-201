/* CMPT 201: Lab #1
 * digits.c: a simple C program that prints out the number
 * of digits in an integer */

#include <stdio.h>

int main(void) {
    int digits = 0, number;

    printf("Enter a non-negative number: ");
    scanf("%d", &number);

    while (number > 0) {
        number /= 10;
        digits++;
    }

    printf("Number of digits: %d\n", digits);
    printf("Thank you for using this program!\n");
    return 0;
}
