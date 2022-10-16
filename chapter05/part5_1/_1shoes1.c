//
// Created by kirito on 2022-10-10.
// 程序清单5.1：把鞋码转换成英寸。
//
#include <stdio.h>

#define ADJUST 7.31 // 字符常量

int main(void) {
    const double SCALE = 0.333; // const变量
    double shoe, foot;
    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;

    printf("Shoe size (men's)    foot length\n");
    printf("%10.1f %15.2f inches\n", shoe, foot);

    return 0;
}
