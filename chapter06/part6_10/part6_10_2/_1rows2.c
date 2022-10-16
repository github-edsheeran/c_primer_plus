//
// Created by kirito on 2022-10-11.
// 程序清单6.18：依赖外部循环的嵌套循环。
//
#include <stdio.h>

int main(void) {
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch;

    for (row = 0; row < ROWS; row++) {
        for (ch = ('A' + row); ch < ('A' + CHARS); ch++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
