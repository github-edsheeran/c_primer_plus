//
// Created by kirito on 2022/11/15.
// 程序清单16.13
//
#include <stdio.h>

#define MYTYPE(X) _Generic((X), \
    int: "int",\
    float: "float",\
    double: "double",\
    default: "other"\
)

int main(void) {
    int d = 5;

    printf("%s\n", MYTYPE(d));  // d是int类型
    printf("%s\n", MYTYPE(2.0 * d));  // 2.0 * d是double类型
    printf("%s\n", MYTYPE(3L)); // 3L是long类型
    printf("%s\n", MYTYPE(&d)); // &d的类型是int *

    return 0;
}