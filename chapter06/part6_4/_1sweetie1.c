//
// Created by kirito on 2022-10-11.
// 程序清单6.10：一个计数循环。
//
#include <stdio.h>

int main(void) {
    const int NUMBER = 22;
    int count = 1;  // 初始化

    while (count <= NUMBER) {   // 测试
        printf("Be my Valentine!\n");   // 行为
        count++;    // 更新计数
    }

    return 0;
}
