//
// Created by kirito on 2022-10-13.
// 程序清单10.2：未初始化数组。
//
#include <stdio.h>

#define SIZE 4

int main(void) {
    int no_data[SIZE];  /* 未初始化数组 */
    int i;

    printf("%2s%14s\n", "i", "no_data[i]");

    for (i = 0; i < SIZE; i++) {
        printf("%2d%14d\n", i, no_data[i]);
    }

    return 0;
}

