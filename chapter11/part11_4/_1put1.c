//
// Created by kirito on 2022/10/19.
// 程序清单11.14：打印字符串，不添加\n。
//
#include <stdio.h>

void put1(const char *string) { /* 不会改变字符串 */
    while (*string != '\0') {
        putchar(*string++);
    }
}
