//
// Created by kirito on 2022-10-11.
// 程序清单6.17：使用嵌套循环。
//
#include <stdio.h>

#define ROWS  6
#define CHARS 10

int main(void) {
    int row;
    char ch;

    for (row = 0; row < ROWS; row++) {
        for (ch = 'A'; ch < ('A' + CHARS); ch++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
