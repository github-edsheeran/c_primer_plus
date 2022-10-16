//
// Created by kirito on 2022-10-11.
// 程序清单6.5：浮点数比较。
//
#include <math.h>
#include <stdio.h>

int main(void) {
    const double ANSWER = 3.14159;
    double response;

    printf("What is the value of pi?\n");
    scanf_s("%lf", &response);

    while (fabs(response - ANSWER) > 0.0001) {
        printf("Try again!\n");
        scanf("%lf", &response);
    }

    printf("Close enough!\n");

    return 0;
}
