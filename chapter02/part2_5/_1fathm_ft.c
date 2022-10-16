//
// Created by kirito on 2022/10/9.
// 程序清单2.2：把2音寻转换成英寸。
//
#include <stdio.h>

int main(void) {
    int feet, fathoms;

    fathoms = 2;
    feet = 6 * fathoms;

    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, I said %d feet!\n", 6 * fathoms);

    return 0;
}
