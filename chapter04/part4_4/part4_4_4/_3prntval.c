//
// Created by kirito on 2022-10-10.
// 程序清单4.13：printf()的返回值。
//
#include <stdio.h>

int main(void) {
    int bph2o = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n", bph2o);
    printf("The printf() function printed %d characters.\n", rv);

    return 0;
}
