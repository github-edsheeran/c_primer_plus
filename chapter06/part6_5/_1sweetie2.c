//
// Created by kirito on 2022-10-11.
// 程序清单6.11：使用for循环的计数循环。
//
#include <stdio.h>

int main(void) {
    const int NUMBER = 22;
    int count;

    for (count = 1; count < NUMBER; count++) {
        printf("Be my Valentine!\n");
    }

    return 0;
}
