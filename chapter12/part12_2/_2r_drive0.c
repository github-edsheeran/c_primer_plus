//
// Created by kirito on 2022/10/31.
// 程序清单12.8：测试rand0()函数。
// 与_1rand0.c一起编译。
//
#include <stdio.h>

extern unsigned int rand0(void);

int main(void) {
    int count;

    for (count = 0; count < 5; count++) {
        printf("%d\n", rand0());
    }

    return 0;
}