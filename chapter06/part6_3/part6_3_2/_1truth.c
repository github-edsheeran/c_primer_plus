//
// Created by kirito on 2022-10-11.
// 程序清单6.7：哪些值为真。
//
#include <stdio.h>

int main(void) {
    int n = 3;

    while (n)
        printf("%2d is true\n", n--);

    printf("%2d is false\n", n);

    n = -3;

    while (n)
        printf("%2d is true\n", n++);

    printf("%2d is false\n", n);

    return 0;
}
