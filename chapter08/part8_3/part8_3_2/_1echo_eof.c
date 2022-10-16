//
// Created by kirito on 2022-10-12.
// 程序清单8.2：重复输入，直到文件结尾。
//
#include <stdio.h>

int main(void) {
    int ch;

    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }

    return 0;
}
