//
// Created by kirito on 2022-10-11.
// 程序清单5.12
//
#include <stdio.h>

#define MAX 100

int main(void) {
    int count = MAX + 1;

    while (--count > 0) {
        printf("%d bottles of spring water on the wall, "
               "%d bottles of spring water!\n", count, count);
        printf("Take on down and pass it around,\n");
        printf("%d bottles of spring water!\n\n", count - 1);
    }

    return 0;
}