/* echoNum.c
 * Simple program which reads numbers in double precision from stdin
 * and prints them on the stdout.
 * It reads several lines of input until it encounters end of file */

#include <stdio.h>

int main(void) {
    double number;
    char tch;

    while ((tch = getchar()) != EOF) {  //If character is not end of file
        ungetc(tch, stdin);    //Put it back to stdin for further processing

        scanf("%lf", &number);    //Read a number
        printf("%lf\n", number);  //Print it

        while (getchar() != '\n') {}    // skip the rest of the line
    }
    return 0;
}
