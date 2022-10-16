//
// Created by kirito on 2022-10-12.
// 程序清单8.1：重复输入。
//
#include <stdio.h>

int main(void) {
    char ch;

    while ((ch = getchar()) != '#') {
        putchar(ch);
    }

    return 0;
}
