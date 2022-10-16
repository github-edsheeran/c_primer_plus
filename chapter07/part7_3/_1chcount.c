//
// Created by kirito on 2022-10-11.
// 程序清单7.6：使用逻辑与运算符。
//
#include <stdio.h>

#define PERIOD '.'

int main(void) {
    int ch;
    int charcount = 0;

    while ((ch = getchar()) != PERIOD) {
        if (ch != '"' && ch != '\'') {
            charcount++;
        }
    }

    printf("There are %d non-quote characters.\n", charcount);

    return 0;
}
