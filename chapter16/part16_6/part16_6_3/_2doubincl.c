//
// Created by kirito on 2022/11/15.
// 程序清单16.11：包含头文件两次。
//
#include <stdio.h>
#include "_1names.h"
#include "_1names.h"    // 不小心第2次包含头文件

int main(void) {
    names winner = {"Less", "Ismoor"};

    printf("The winner is %s %s.\n", winner.first, winner.last);

    return 0;
}
