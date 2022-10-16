//
// Created by kirito on 2022/10/9.
// 程序清单3.7：以两种方式显示float类型的值。
// 使用%f打印十进制记数法的float和double类型浮点数，用%e打印指数记数法的浮点数。如果系统支持十六进制格式的浮点数，可用a和A
// 分别代替e和E。打印long double类型要使用%Lf、%Le或%La转换说明。
//
#include <stdio.h>

int main(void) {
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n", aboat, aboat);
    // 下一行要求编译器支持C99或其中的相关特性
    printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
    printf("%f can be written %e\n", abet, abet);
    printf("%Lf can be written %Le\n", dip, dip);

    return 0;
}
