//
// Created by kirito on 2022/11/15.
// 程序清单16.5：变参宏。
//
#include <stdio.h>
#include <math.h>

#define PR(X, ...) printf("Message " #X ": " __VA_ARGS__)

int main(void) {
    double x = 48;
    double y;

    y = sqrt(x);
    PR(1, "x = %g\n", x);
    PR(2, "x = %.2f, y = %.4f\n", x, y);

    return 0;
}
